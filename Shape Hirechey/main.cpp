#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Shape
{
private:
public:
    virtual double calcualte_area();
    virtual double calcualte_perimeter();
    virtual void draw();

    virtual ~Shape(){};
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    double calcualte_area() override
    {
        Shape::calcualte_area();
        return M_PI * radius * radius;
    }
    double calcualte_perimeter() override
    {
        Shape::calcualte_perimeter();
        return 2 * M_PI * radius;
    }
    void draw() override
    {
        Shape::draw();
        cout << "Circle With Radius: " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    int length, width;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    // Methods
    double calcualte_area() override
    {
        Shape::calcualte_area();
        return length * width;
    }
    double calcualte_perimeter() override
    {
        Shape::calcualte_perimeter();
        return 2 * length * width;
    }
    void draw() override
    {
        Shape::draw();
        cout << "Circle With "
             << " Length: " << length << " and Width " << width;
    }
};

class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    Triangle(double side1, double side2, double side3)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    // Method overrideing
    double calcualte_area() override
    {
        Shape::calcualte_area();
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double calcualte_perimeter() override
    {
        Shape::calcualte_perimeter();
        return side1 + side2 + side3;
    }
    void draw() override
    {
        Shape::draw();
        cout << "Triangle with " << endl;
        cout << "Side1: " << side1 << endl;
        cout << "Side2: " << side2 << endl;
        cout << "Side3: " << side3 << endl;
    }
};
