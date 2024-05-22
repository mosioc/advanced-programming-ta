#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
    Shape(const string& n, const string& c)
        : name(n), color(c) {}

    void setName(const string& n) {
        name = n;
    }

    void setColor(const string& c) {
        color = c;
    }

    string getName() const {
        return name;
    }

    string getColor() const {
        return color;
    }

private:
    string name;
    string color;
};

class Rectangle : public Shape {
public:
    Rectangle(const string& n, const string& c, double l, double w)
        : Shape(n, c), length(l), width(w) {}

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

private:
    double length;
    double width;
};

int main() {
    Shape shape("Generic Shape", "Red");
    Rectangle rectangle("Rectangle", "Blue", 5.0, 3.0);

    cout << "Shape: " << shape.getName() << ", Color: " << shape.getColor() << endl;
    cout << "Rectangle: " << rectangle.getName() << ", Color: " << rectangle.getColor() << ", Length: " << rectangle.getLength() << ", Width: " << rectangle.getWidth() << endl;

    return 0;
}
