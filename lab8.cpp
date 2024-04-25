// #include <iostream>
// using namespace std;

// class Drawable
// {
// public:
//     virtual void draw() const = 0;
// };

// class Circle : public Drawable
// {
// public:
//     void draw() const override
//     {
//         cout << "This is inherited virtual function that is overriden" << endl;
//     }
// };
// int main()
// {
//     Circle circle;
//     circle.draw();
// }
// #include <iostream>
// using namespace std;

// class Vehicle
// {
// public:
//     virtual void start() const = 0;
//     void stop() const
//     {
//         cout << "Car has stopped" << endl;
//     }
// };

// class Car : virtual public Vehicle
// {
// public:
//     void start() const override
//     {
//         cout << "Car has started" << endl;
//     }
// };
// int main()
// {
//     Car car;
//     car.start();
//     car.stop();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 4;
//     int *aptr = &a;

//     cout << "Address of a: " << aptr << endl;

//     aptr = new int(33);
//     cout << "New value: " << *aptr << endl;

//     // # NEW: Dynamincally allocting the memory.

//     int *arr = new int[3];
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     delete arr;
//     delete[] arr;
//     cout << "The value of arr[0] is: " << arr[0] << endl;
//     cout << "The value of arr[1] is: " << arr[1] << endl;
//     cout << "The value of arr[2] is: " << arr[2] << endl;

//     // # DELETE: for freeing the contigious block of memory
// }

// # Pointer to object:
// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real, imgainary;

// public:
//     void getData()
//     {
//         cout << "The Real Part is " << real << endl;
//         cout << "The Imaginary Part is " << imgainary << endl;
//     }
//     void setData(int a, int b)
//     {
//         real = a;
//         imgainary = b;
//     }
// };
// int main()
// {

// Complex c1;

// Complex *ptr = &c1;                 // # Method 1.
// Complex *complex_ptr = new Complex; // Method 2.

// // (*ptr).setData(12, 34); is exacty same as
// ptr->setData(1, 45);
// // (*ptr).getData();
// ptr->getData();
// return 0;

//     Complex *ptr = new Complex[4];
//     ptr->setData(12, 4);
//     ptr->getData();
// }

// #include <iostream>
// using namespace std;

// class Shop
// {
// private:
//     int id;
//     float price;

// public:
//     void set_data(int a, float b)
//     {
//         id = a;
//         price = b;
//     }
//     void get_data(void)
//     {
//         cout << "Code of this item is " << id << endl;
//         cout << "Price of this items is " << price << endl;
//     }
// };

// int main()
// {
//     int size = 3;
//     Shop *ptr = new Shop[size];
//     Shop *ptrTemp = ptr;
//     int p, q;

//     for (int i = 0; i < size; i++)
//     {
//         cout << "Id and Price of item " << i + 1;
//         cin >> p >> q;
//         ptr->set_data(p, q);
//         ptr++;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Item number: " << i + 1;
//         ptr->get_data();
//         ptr++;
//     }
// }

// #include <iostream>
// using namespace std;

// class A
// {

// private:
//     int a;

// public:
//     void set_data(int a)
//     {
//         this->a = a;
//     }
//     void get_data()
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };
// int main()
// {
//     A a;
//     a.set_data(232);
//     a.get_data();
// }
// This is a keyword which is the pointer which points to the object invokes the member functions.
// This also represent the instance of the function.

// #include <iostream>
// using namespace std;

// class BaseClass
// {
// public:
//     int var_base = 12;
//     void display()
//     {
//         cout << "Displaying base class var1 " << var_base << endl;
//     }
// };

// class DerivedClass : public BaseClass
// {
// public:
//     int var_derived = 32;
//     void display()
//     {
//         cout << "Displaying derived class var1 " << var_derived << endl;
//         cout << "Displaying base class var1 " << var_base << endl;
//     }
// };

// int main()
// {
//     BaseClass *baseclassptr;
//     BaseClass obj_base;
//     DerivedClass obj_dervied;

//     baseclassptr = &obj_dervied;
//     baseclassptr->var_base = 34;
//     baseclassptr->display();

//     DerivedClass *dervied_pointer = &obj_dervied;
//     dervied_pointer->var_derived = 2324;
//     dervied_pointer->var_base = 32412;
//     dervied_pointer->display();

//     return 0;
// }

// ? Create a base class called Shape with a virtual function area(). Then create two derived classes, Rectangle and Circle, each with their own implementation of the area() function. Now, declare a pointer to the base class and dynamically allocate memory for objects of both derived classes. Use this pointer to call the area() function for each object.

// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual void area() const = 0;
// };

// class Rectangle : public Shape
// {
// private:
//     int length, width;

// public:
//     Rectangle(int length, int width) : Shape()
//     {
//         this->length = length;
//         this->width = width;
//     }
//     void area() const override
//     {
//         int area = length * width;
//         cout << "Rectangle Area: " << area << endl;
//     }
// };

// class Circle : public Shape
// {
// private:
//     int radius;

// public:
//     Circle(int radius) : Shape()
//     {
//         this->radius = radius;
//     }
//     void area() const override
//     {
//         int area = (3.14159) * radius * radius;
//         cout << "Area of Circle: " << area << endl;
//     }
// };

// int main()
// {
//     Shape *shape_ptr;

//     Rectangle r1(32, 42);
//     Circle c1(234);

//     shape_ptr = &r1;
//     shape_ptr->area();
// }

// ? Develop a base class Animal with virtual functions sound() and move(). Derive two classes, Dog and Bird, implementing these functions differently. Create a pointer to the base class and use it to access the sound() and move() functions for both derived classes.

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound();
    virtual void move();
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "DOG BARKS" << endl;
    }
    void move() override
    {
        cout << "DOG MOVES" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "CAT MEOWS" << endl;
    }
    void move() override
    {
        cout << "CAT MOVES" << endl;
    }
};
int main()
{
    Dog dog;
    Cat cat;
    Animal *animal_ptr;

    animal_ptr = &dog;
    animal_ptr->move();
    animal_ptr->sound();
    animal_ptr = &cat;
    cout << endl;
    animal_ptr->move();
    animal_ptr->sound();
}

// Design a base class Vehicle with virtual functions startEngine() and stopEngine(). Create derived classes Car and Motorcycle implementing these functions. Declare a pointer to the base class and dynamically allocate memory for objects of both derived classes. Use this pointer to start and stop the engines of both vehicles

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     virtual void sound();
// };
// class Dog : public Animal
// {
// public:
//     void sound() override
//     {
//         cout << "DOG BARKS" << endl;
//     }
// };
// int main()

// {
//     Dog dog;
//     Animal *animal_ptr[5] = &dog;
//     for (int i = 0; i < 5; i++)
//     {

//         animal_ptr[i]->sound();
//     }
// }