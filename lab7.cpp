
// #include <iostream>
// using namespace std;

// class Shape
// {
// private:
//     int length;
//     int width;

// public:
//     Shape(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     virtual int calculate_area()
//     {
//         return length * width;
//     }
// };
// class Rectangle : public Shape
// {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(int length, int width) : Shape(length, width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     int calculate_area() override
//     {
//         Shape::calculate_area();
//         return length * width;
//     }
// };
// class circle : public Shape
// {
// private:
//     int radius;

// public:
//     circle(int radius) : Shape(radius, radius)
//     {
//         this->radius = radius;
//     }
//     int calculate_area() override
//     {
//         Shape::calculate_area();
//         return (3.14) * radius * radius;
//     }
// };
// int main()
// {
//     Shape s1(20, 20);
//     int result_1 = s1.calculate_area();
//     cout << result_1 << endl;

//     Rectangle r1(20, 30);
//     int result_2 = r1.calculate_area();
//     cout << result_2 << endl;

//     circle c1(30);
//     int result_3 = c1.calculate_area();
//     cout << result_3 << endl;
// }

// 3.	Modify the "calculateArea" function in the "Rectangle" class to also calculate the perimeter of the rectangle. Override the "calculateArea" function in the "Circle" class to calculate the circumference of the circle. Update the loop to display both the area and perimeter (or circumference) for each object.

// #include <iostream>
// using namespace std;

// class Shape
// {
// private:
//     int length;
//     int width;

// public:
//     Shape(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     virtual int calculate_area()
//     {
//         int area = length * width;
//         cout << area << endl;
//     }
// };

// class Rectangle : public Shape
// {
// private:
//     int length, width;

// public:
//     Rectangle(int length, int width) : Shape(length, width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     int calculate_area() override
//     {
//         Shape::calculate_area();
//         int area = length * width;
//         int parameter = 2 * (length + width);

//         cout << parameter << endl;
//     }
// };
// int main()
// {
//     // Variabe to store the pointer index:
//     int num_shapes = 2;

//     Shape *shapes[num_shapes]; // Array that contain address

//     shapes[0] = new Shape(20, 23);
//     shapes[1] = new Rectangle(1, 3);

//     for (int i = 0; i < num_shapes; i++)
//     {
//         cout << "Area: " << endl;
//         shapes[i]->calculate_area();
//     }
// }

#include <iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interest_rate;
    float return_value;

public:
    BankDeposit() {}
    BankDeposit(int principle, int years, float interest_rate)
    {
        this->principle = principle;
        this->years = years;
        this->interest_rate = interest_rate;
        // return_value = 0;

        for (int i = 0; i < years; i++)
        {
            return_value = return_value * (1 + interest_rate);
        }
    }
    BankDeposit(int principle, int years, int interest_rate)
    {
        this->principle = principle;
        this->years = years;
        this->interest_rate = float(interest_rate) / 100;
        // return_value = 0;

        for (int i = 0; i < years; i++)
        {
            return_value = return_value * (1 + interest_rate);
        }
    }
    void show()
    {
        cout << endl
             << "Principle amount was " << principle << "Returen Value after " << years << " is " << return_value << endl;
    }
};

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    return 0;
}