#include <cmath>
#include <iostream>

using namespace std;

class Line {
private:
    double x1, y1, x2, y2;

public:
    Line() : x1(0), y1(0), x2(0), y2(0) {}

    Line(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    void setPoints(double x1, double y1, double x2, double y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    Line operator+(const Line& other) const {
        Line result;
        result.x1 = x1;
        result.y1 = y1;
        result.x2 = other.x2;
        result.y2 = other.y2;
        return result;
    }

    double length() const {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the coordinates of the first point for Line 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point for Line 1 (x2 y2): ";
    cin >> x2 >> y2;

    Line line1;
    line1.setPoints(x1, y1, x2, y2);

    cout << "Enter the coordinates of the first point for Line 2 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point for Line 2 (x2 y2): ";
    cin >> x2 >> y2;

    Line line2;
    line2.setPoints(x1, y1, x2, y2);

    Line combinedLine = line1 + line2;

    cout << "Line 1 length: " << line1.length() << endl;
    cout << "Line 2 length: " << line2.length() << endl;
    cout << "Combined Line length: " << combinedLine.length() << endl;

    return 0;
}
