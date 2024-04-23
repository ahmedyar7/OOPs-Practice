
#include <iostream>
using namespace std;

class Shape
{
private:
    int length;
    int width;

public:
    Shape(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    virtual int calculate_area()
    {
        return length * width;
    }
};
class Rectangle : public Shape
{
private:
    int length;
    int width;

public:
    Rectangle(int length, int width) : Shape(length, width)
    {
        this->length = length;
        this->width = width;
    }
    int calculate_area() override
    {
        Shape::calculate_area();
        return length * width;
    }
};
class circle : public Shape
{
private:
    int radius;

public:
    circle(int radius) : Shape(radius, radius)
    {
        this->radius = radius;
    }
    int calculate_area() override
    {
        Shape::calculate_area();
        return (3.14) * radius * radius;
    }
};
int main()
{
    Shape s1(20, 20);
    int result_1 = s1.calculate_area();
    cout << result_1 << endl;

    Rectangle r1(20, 30);
    int result_2 = r1.calculate_area();
    cout << result_2 << endl;

    circle c1(30);
    int result_3 = c1.calculate_area();
    cout << result_3 << endl;
}
