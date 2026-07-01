#include <iostream>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string c) {
        color = c;
    }

    virtual void display() {
        cout << "Shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c) {
        radius = r;
    }

    void display() override {
        cout << "Circle" << endl;
        cout << "Color: " << color << endl;
        cout << "Radius: " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(string c, double l, double w) : Shape(c) {
        length = l;
        width = w;
    }

    void display() override {
        cout << "Rectangle" << endl;
        cout << "Color: " << color << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    Shape* shapes[2];

    shapes[0] = new Circle("Red", 5);
    shapes[1] = new Rectangle("Blue", 10, 6);

    for (int i = 0; i < 2; i++) {
        shapes[i]->display();
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}