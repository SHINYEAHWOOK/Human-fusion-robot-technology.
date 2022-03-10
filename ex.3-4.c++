#include <iostream>
using namespace std;

class Circle {
    public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
    radius = r;
    cout << "Radius" << radius << "Original generation." << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle dount;
    double area = dount.getArea();
    cout << "The area dount" << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "The area pizza" << area << endl;
}