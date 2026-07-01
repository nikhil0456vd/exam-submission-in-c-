#include <iostream>
using namespace std;

class Shape
{
private:
    string color;
    float area;

public:
   
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

protected:
    void setArea(float a)
    {
        area = a;
    }

    float getArea()
    {
        return area;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r, string c)
    {
        radius = r;
        setColor(c);
    }

    void calculateArea()
    {
        float a = 3.14 * radius * radius;
        setArea(a);
    }

    void display()
    {
        cout << "Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w, string c)
    {
        length = l;
        width = w;
        setColor(c);
    }

    void calculateArea()
    {
        float a = length * width;
        setArea(a);
    }

    void display()
    {
        cout << "\nRectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Area: " << getArea() << endl;
    }
};


int main()
{
    Circle c1(15, "black");
    c1.calculateArea();
    c1.display();

    Rectangle r1(5, 10, "white");
    r1.calculateArea();
    r1.display();

    return 0;
}