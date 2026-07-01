#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double l)
     {
        length = l;
    }

    void setWidth(double w)
     {
        width = w;
    }

    double getLength()
     {
        return length;
    }

    double getWidth() 
    {
        return width;
    }

    double calculateArea() 
    {
        return length * width;
    }
};

int main() 
{
    Rectangle r;
    r.setLength(20);
    r.setWidth(5);

    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Area: " << r.calculateArea() << endl;

    return 0;
}
