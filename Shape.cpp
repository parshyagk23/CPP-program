#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);
    
    std::cout << "Circle Area: " << shape1->area() << std::endl;
    std::cout << "Rectangle Area: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;
    return 0;
}
