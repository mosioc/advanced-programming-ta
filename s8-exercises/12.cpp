#include <iostream>
#include <vector>

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
    size_t rows;
    size_t cols;

public:
    // Constructor with dimensions and optional initialization
    Matrix(size_t rows, size_t cols, const std::vector<std::vector<T>>& values = {})
        : rows(rows), cols(cols), data(rows, std::vector<T>(cols)) {
        if (!values.empty()) {
            for (size_t i = 0; i < rows; ++i) {
                for (size_t j = 0; j < cols; ++j) {
                    data[i][j] = values[i][j];
                }
            }
        }
    }

    // Matrix addition
    Matrix<T> add(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions do not match for addition.");
        }

        Matrix<T> result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Matrix subtraction
    Matrix<T> subtract(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions do not match for subtraction.");
        }

        Matrix<T> result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }

        return result;
    }

    // Matrix multiplication
    Matrix<T> multiply(const Matrix<T>& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Invalid matrix dimensions for multiplication.");
        }

        Matrix<T> result(rows, other.cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < other.cols; ++j) {
                for (size_t k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Display the matrix
    void display() const {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    // Create matrices
    Matrix<int> A(2, 3, {{1, 2, 3}, {4, 5, 6}});
    Matrix<int> B(2, 3, {{7, 8, 9}, {10, 11, 12}});
    Matrix<int> C(3, 2, {{1, 2}, {3, 4}, {5, 6}});

    // Display matrices
    std::cout << "Matrix A:\n";
    A.display();
    std::cout << "\nMatrix B:\n";
    B.display();
    std::cout << "\nMatrix C:\n";
    C.display();

    // Perform operations
    try {
        Matrix<int> result_add = A.add(B);
        Matrix<int> result_subtract = A.subtract(B);
        Matrix<int> result_multiply = A.multiply(C);

        // Display results
        std::cout << "\nA + B:\n";
        result_add.display();
        std::cout << "\nA - B:\n";
        result_subtract.display();
        std::cout << "\nA * C:\n";
        result_multiply.display();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}