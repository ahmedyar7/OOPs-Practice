// #include <iostream>
// #include <cmath>
// using namespace std;

// class Circle
// {
// private:
//     double radius;

// public:
//     double area(double r)
//     {
//         r = radius;
//         double areaOfCircle = (3.14159) * pow(r, 2);
//         return areaOfCircle;
//     }
// };

// int main()
// {
//     Circle c;
//     double r;
//     cin >> r;
//     cout << c.area(r);
// }

// #include <iostream>
// using namespace std;

// class Book
// {
// private:
//     string author;
//     string title;
//     int year;

// public:
//     // constructor:
//     Book(string author, string title, int year)
//     {
//         this->author = author;
//         this->title = title;
//         this->year = year;
//     }
//     // Member Fucntion:
//     void display();
// };

// void Book ::display()
// {
//     cout << author << endl;
//     cout << title << endl;
//     cout << year << endl;
// }

// int main()
// {
//     class Book b("Jordan", "12RUle", 434);
//     b.display();
// }

// Create a class named Rectangle with attributes length and width (both integers). Implement a constructor to initialize these attributes and a member function calculateArea that returns the area of the rectangle

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     int l;
//     int w;

// public:
//     // Constructor:
//     Rectangle()
//     {
//         cout << "Enter the length: ";
//         cin >> l;
//         this->l;
//         cout << "Enter the width: ";
//         cin >> w;
//         this->w;
//     }
//     // Member Function:
//     void area()
//     {
//         int area = l * w;
//         cout << "The area is: " << area << endl;
//     }
// };

// int main()
// {
//     class Rectangle obj1;
//     obj1.area();
// }

// Question:
// Design a class called Student with attributes name (string), rollNumber (integer), and marks (float). Create a constructor to initialize these attributes and a member function displayDetails to print the student's details.

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int rollNumber;
//     float marks;

//     // Constructor;
// public:
//     Student()
//     {
//         cout << "Enter the name: ";
//         cin >> name;
//         this->name;
//         cout << "Enter the roll Number: ";
//         cin >> rollNumber;
//         this->rollNumber;
//         cout << "Enter the marks: ";
//         cin >> marks;
//         this->marks;
//     }

//     // Member Functions:
//     void displayDetails()
//     {
//         cout << "The name is: " << name << endl;
//         cout << "The roll number is " << rollNumber << endl;
//         cout << "The marks is: " << marks << endl;
//     }
// };

// int main()
// {
//     class Student a;
//     cout << endl;
//     a.displayDetails();
// }

// Define a class named Circle with a private attribute radius (double). Implement a constructor to set the radius and a member function calculateArea that returns the area of the circle.

// #include <iostream>
// using namespace std;

// const double PI = 3.14159;

// class Circle
// {
// private:
//     double r;

// public:
//     // Constructor:
//     Circle()
//     {
//         cout << "Enter the radius: ";
//         cin >> r;
//         this->r;
//     }
//     // Member Functions:
//     void areaOfCircle()
//     {
//         double area = PI * r * r;
//         cout << "The area is " << area << endl;
//     }

//     void circumference()
//     {
//         double circum = 2 * PI * r;
//         cout << "The circumferece of the circle is: " << circum << endl;
//     }
// };

// int main()
// {
//     class Circle c;
//     c.areaOfCircle();
//     cout << endl;
//     c.circumference();
// }
// Create a class Employee with attributes name (string), employeeId (integer), and salary (double). Implement a constructor to initialize these attributes and a member function displaySalary to print the employee's name and salary.

// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//     string name;
//     string employeeId;
//     double salary;

// public:
//     // Constructor:
//     Employee()
//     {
//         cout << "Enter the name: ";
//         cin >> name;
//         this->name;
//         cout << "Enter the employeeid: ";
//         cin >> employeeId;
//         this->employeeId;
//         cout << "Enter the salary: ";
//         cin >> salary;
//         this->salary;
//     }
//     // Member Function:
//     void display()
//     {
//         cout << "The name is: " << name << endl;
//         cout << "The employee id is " << employeeId << endl;
//         cout << "the salary is " << salary << endl;
//     }
// };

// int main()
// {
//     class Employee ahmed;
//     ahmed.display();
// }

// Design a class called BankAccount with attributes accountNumber (string) and balance (double). Implement a constructor to set these attributes, and a member function deposit to add money to the account.

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     string accountName;
//     double balance;

// public:
//     // Constructor:
//     BankAccount()
//     {
//         cout << "Enter the account name: ";
//         cin >> accountName;
//         this->accountName;
//         cout << "Enter the balance: ";
//         cin >> balance;
//         this->balance;
//     }
//     // Method Function:
//     void deposit()
//     {
//         cout << "Enter the amount you want to deposit: ";
//         int add;
//         cin >> add;
//         balance += add;
//         cout << "The balace updated is " << balance << endl;
//     }
// };

// int main()
// {
//     class BankAccount hbl;
//     hbl.deposit();
// }

// Define a class named Person with attributes firstName (string) and lastName (string). Create a constructor to initialize these attributes and a member function getFullName that returns the full name.

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// class Person
// {
// private:
//     string firstName;
//     string lastName;

// public:
//     // Constructor:
//     Person()
//     {
//         cout << "Enter the first name: ";
//         cin >> firstName;
//         firstName = firstName;
//         cout << "Enter the last name: ";
//         cin >> lastName;
//         lastName = lastName;
//     }
//     void display()
//     {
//         string fullName = firstName + lastName;
//         cout << fullName << endl;
//     }
//     void upperCase();
//     void reverseing();
//     void lowerCase();
// };

// void Person ::upperCase()
// {
//     // Upper case:
//     string fullName = firstName + lastName;
//     for (int i = 0; i < fullName.length(); i++)
//     {
//         fullName[i] = toupper(fullName[i]);
//     }
//     cout << fullName << endl;
// }

// void Person ::reverseing()
// {
//     // Reversing name;
//     string fullName = firstName + lastName;
//     string rstr = fullName;
//     reverse(rstr.begin(), rstr.end());
//     cout << rstr << endl;
// }

// void Person ::lowerCase()
// {
//     string rstr = firstName + lastName;
//     for (int i = 0; i < rstr.length(); i++)
//     {
//         rstr[i] = tolower(rstr[i]);
//     }
//     cout << rstr << endl;
// }

// int main()
// {
//     class Person p;
//     string s;
//     p.display();
//     p.upperCase();
//     p.reverseing();
//     p.lowerCase();
// }

// Create a class TemperatureConverter with attributes celsius (double) and fahrenheit (double). Implement a constructor to initialize the temperature in Celsius and a member function convertToFahrenheit to convert and return the temperature in Fahrenheit.

// #include <iostream>
// using namespace std;

// class TemperatureConverter
// {
// private:
//     double c;
//     double f;

// public:
//     // Constructor:
//     TemperatureConverter()
//     {
//         cout << "Enter the celius: ";
//         cin >> c;
//         this->c;
//         cout << "Enter the farienhiet: ";
//         cin >> f;
//         this->f;
//     }
//     // Member Function:
//     int convertToFahrenheit()
//     {
//         c;
//         double result = c * (9.0 / 5.0) + 32.0;
//         cout << "The temp in f " << result << endl;
//     }

//     int convertToCelius()
//     {
//         f;
//         double result = (f - 32.0) * 5.0 / 9.0;
//         cout << "The temp in c " << result << endl;
//     }
// };

// int main()
// {
//     class TemperatureConverter o1;
//     o1.convertToCelius();
//     o1.convertToFahrenheit();
// }

// Design a class Triangle with attributes side1, side2, and side3 (all integers). Implement a constructor to initialize these attributes and a member function isEquilateral that returns true if the triangle is equilateral./

// #include <iostream>
// using namespace std;

// class Triangle
// {
// private:
//     int s1;
//     int s2;
//     int s3;

// public:
//     // Constructor:
//     Triangle()
//     {
//         cout << "Enter the side1: ";
//         cin >> s1;
//         s1 = s1;
//         cout << "Enter the side2: ";
//         cin >> s2;
//         s2 = s2;
//         cout << "Enter the side3: ";
//         cin >> s3;
//         s3 = s3;
//     }
//     // Member Function:
//     bool isEquilateralTriangle()
//     {
//         return (s1 == s2 && s2 == s3 && s3 == s1);
//     }

//     bool isIsoscelesTriangle()
//     {
//         return (s1 == s2 && s2 == s3 && s3 != s1);
//     }

//     bool isScaleneTriangle()
//     {
//         return (s1 != s2 && s2 != s3 && s3 != s1);
//     }
// };

// int main()
// {
//     Triangle t1;
//     cout << "Equilateral: " << t1.isEquilateralTriangle() << endl;
//     cout << "Isosceles: " << t1.isIsoscelesTriangle() << endl;
//     cout << "Scalene: " << t1.isScaleneTriangle() << endl;
// }

// Define a class called Product with attributes productName (string) and price (double). Create a constructor to set these attributes, and a member function applyDiscount that takes a discount percentage and updates the price

// #include <iostream>
// using namespace std;

// class Product
// {
// private:
//     string productName;
//     double price;

// public:
//     // CONSTRUCTOR:
//     Product()
//     {
//         cout << "Enter the Product Name: " << endl;
//         cin >> productName;
//         productName = productName;
//         cout << "Enter the Price: " << endl;
//         cin >> price;
//         price = price;
//     }
//     // MEMBER FUNCTION:
//     void applyDiscount()
//     {
//         productName;
//         price;
//         cout << "Enter the discount Percentage: " << endl;
//         double discount;
//         cin >> discount;
//         double finalPrice = price * (discount / 100);
//         cout << "The Final Price of the " << productName << " is " << finalPrice << endl;
//     }
// };

// int main()
// {
//     class Product p1;
//     p1.applyDiscount();
// }

// Bank System:
// Design a C++ class representing a bank account. Include functionalities for deposit, withdrawal, and balance inquiry. Use an array to store multiple account

// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// class BankAccount
// {
// private:
//     string name;
//     int accountNumber;
//     double balance;

// public:
//     // Constructor:
//     BankAccount(string holder, int number, double mybalance)
//     {
//         name = holder;
//         accountNumber = number;
//         balance = mybalance;
//     }
//     // Member Function:
//     void deposit(double amount)
//     {
//         balance += amount;
//         cout << "The amount that is deposited is " << amount << endl;
//         cout << "Now to total balace is " << balance << endl;
//     }

//     void withdrawal(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance = balance - amount;
//             cout << "The UPATED BALANCE IS: " << balance << endl;
//         }
//         else
//         {
//             cout << "NOT POSSILBE";
//         }
//     }

//     void transferFunds(BankAccount &targetAccount, double amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//             targetAccount.deposit(amount);
//             cout << "The funds transfer successfully\n";
//         }
//         else
//         {
//             cout << "NOT enough funds to transfer\n";
//         }
//     }
// };

// int main()
// {
//     BankAccount a1("Ahmed", 3234, 20);
//     BankAccount account2("Bob", 67890, 500.00);
//     a1.deposit(100);
//     a1.withdrawal(20.00);
//     account2.deposit(300.00);
//     account2.withdrawal(100.00);
//     a1.transferFunds(account2, 150.00);
// }

// Bank System:
// Design a C++ class representing a bank account. Include functionalities for deposit, withdrawal, and balance inquiry. Use an array to store multiple account

// #include <iostream>
// using namespace std;

// class Bank
// {
// private:
//     string accountName;
//     string accountNumber;
//     int balance;

// public:
//     // Constructor:
//     Bank(string accName, string accNumber, int myBalance)
//     {
//         accountName = accName;
//         accountNumber = accNumber;
//         balance = myBalance;
//     }
//     // Member Function:
//     void displayDetails()
//     {
//         cout << "The account Name is: " << accountName << endl;
//         cout << "The account number is: " << accountNumber << endl;
//         cout << "The balance is : " << balance << endl;
//     }

//     void deposit(int amount)
//     {
//         balance += amount;
//         cout << "Your Balance after deposit is " << balance << endl;
//     }

//     void withdrawal(int amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//             cout << "Your account balance after the withdrawal " << balance << endl;
//         }
//         else
//         {
//             cout << "The withdrawl is not possible for the current balance of the account " << endl;
//         }
//     }

//     void transfer(Bank &p2, int amount)
//     {
//         if (amount < 5000)
//         {
//             balance -= amount;
//             p2.deposit(amount);
//             cout << "The transfer was successfull\n";
//         }
//         else
//             cout << "Un successfull \n";
//     }
// };

// int main()
// {
//     class Bank p1("HBL", "2003", 2000);
//     class Bank p2("UBL", "2003", 20000);
//     p1.displayDetails();
//     p1.deposit(2000);
//     p1.withdrawal(4000);
//     p1.transfer(p2, 2000);
// }

// #include <iostream>
// using namespace std;

// class Library
// {
// private:
//     string title;
//     string author;
//     bool isBorrowed;

// public:
//     // Constructor:
//     Library(string bookTitle, string authorName, bool borrowed)
//     {
//         title = bookTitle;
//         author = authorName;
//         isBorrowed = borrowed;
//     }
//     // Member Function:
//     void borrowBook()
//     {
//         if (!isBorrowed)
//         {
//             isBorrowed = true;
//             cout << "Book " << title << " by " << author << " is now borrowed \n";
//         }
//         else
//         {
//             cout << "The book is already borrowed\n";
//         }
//     }

//     void returnBook()
//     {
//         if (!isBorrowed)
//         {
//             cout << "The book " << title << " by " << author << " is now returned \n";
//         }
//         else
//             cout << "The book is now currently borrowed\n";
//     }

//     void displayDetails()
//     {
//         cout << "Book Title : " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Status: " << (isBorrowed ? "Borrowed" : "Avalible") << endl;
//     }
// };

// int main()
// {
//     class Library p1("12 Rule For Life \n", " Jordan B Peterson \n", 0);
//     // p1.borrowBook();
//     // p1.returnBook();
//     p1.displayDetails();
// }

// #include <iostream>
// using namespace std;

// class Library
// {
// private:
//     string title;
//     string author;
//     bool isBorrowed;

// public:
//     // Constructor:
//     Library()
//     {
//         cout << "Enter the book Name: ";
//         cin >> title;
//         title = title;
//         // cout << title << endl;
//         cout << "Enter the author Name: ";
//         cin >> author;
//         author = author;
//         // cout << author << endl;
//         cout << "Enter The book status: ";
//         cin >> isBorrowed;
//         isBorrowed = isBorrowed;
//     }
//     // member function:
//     void borrowed()
//     {
//         if (isBorrowed == true)
//         {
//             cout << "The book is borrowed\n";
//         }
//         else
//             cout << "The book is Returned\n";
//     }

//     void displayDetails()
//     {
//         title, author, isBorrowed;
//         cout << "Author Name: " << author << endl;
//         cout << "Title: " << title << endl;
//         if (isBorrowed == true)
//         {
//             cout << "Status:"
//                  << " Avalible " << endl;
//         }
//         else
//         {
//             cout << "Status: "
//                  << "NOT AVALIBLE \n";
//         }
//     }
// };

// int main()
// {
//     class Library p;
//     cout << endl;
//     p.displayDetails();
// }

// Online Shopping Cart:
// Implement a class for an online shopping cart, including features for adding/removing items, calculating the total cost, and displaying the cart contents. Extend the program to support promotions, discounts, and user authentication.

// #include <iostream>
// using namespace std;

// class ShoppingCart
// {
// private:
//     string item[10];
//     int price[10];

// public:
//     // Constructor:
//     ShoppingCart()
//     {
//         cout << "Enter the No.Items: \n";
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Enter Item: " << i + 1 << " ";
//             cin >> item[i];
//         }
//         cout << "Enter the Prices: \n";
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Enter the price ";
//             cin >> price[i];
//         }
//     }
//     // Member Functions:
//     void displayDetails()
//     {
//         int n;
//         cout << "The total Items:\n ";
//         for (int i = 0; i < n; i++)
//         {
//             cout << item[i] << endl;
//         }
//         cout << "The Total Prices of Items\n";
//         for (int i = 0; i < n; i++)
//         {
//             cout << price[i] << endl;
//         }
//     }
// };

// int main()
// {
//     class ShoppingCart p1;
//     p1.displayDetails();
// }

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     int rollNum;
//     string name;
//     int marks[5];

// public:
//     // Constructor:
//     Student(int roll, string named)
//     {
//         rollNum = roll;
//         name = named;
//         for (int i = 0; i < 5; i++)
//         {
//             marks[i] = 0;
//         }
//     }
//     // Methods;
//     void setMarks(int subjectIndex, int subjectMarks) // Method # 1:- for setting the marks.
//     {
//         if (subjectIndex >= 0 && subjectIndex < 5)
//         {
//             marks[subjectIndex] = subjectMarks;
//         }
//     }
//     // Method # 2:- to display student details:
//     void displayDetails()
//     {
//         cout << "Roll Number: " << rollNum << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks in Subjects: " << endl;
//         for (int i = 0; i < 5; i++)
//         {
//             cout << marks[i] << " ";
//         }
//         cout << endl;
//     }
//     // Method # 3:- Display the average:
//     void average()
//     {
//         int totalMarks = 0;
//         for (int i = 0; i < 5; i++)
//         {
//             totalMarks += marks[i];
//         }
//         int average = totalMarks / 5;
//         cout << "The average score is " << average << endl;
//     }
// };

// int main()
// {
//     class Student student1(2001, "AhmedYar");
//     student1.setMarks(0, 85);
//     student1.setMarks(1, 90);
//     student1.setMarks(2, 78);
//     student1.setMarks(3, 92);
//     student1.setMarks(4, 88);

//     student1.displayDetails();
//     student1.average();
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int marks[3];

// public:
//     // CONSTRUCTOR:
//     Student()
//     {
//         cout << "Enter the Name: ";
//         getline(cin, name);
//         name = name;
//         cout << "Enter the Marks: " << endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cout << "Enter the Marks" << i + 1 << " : ";
//             cin >> marks[i];
//         }
//     }
//     // METHODS:
//     void average()
//     {
//         int total = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             total += marks[i];
//         }
//         int average = total / 3;
//         cout << endl;
//         cout << "Average:  " << average << endl;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "The Marks: " << endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cout << marks[i] << " ";
//         }
//     }

//     void sort()
//     {
//         for (int i = 0; i < 3 - 1; i++)
//         {
//             for (int j = i + 1; j < 3; j++)
//             {
//                 if (marks[j] < marks[i])
//                 {
//                     int temp = marks[j];
//                     marks[j] = marks[i];
//                     marks[i] = temp;
//                 }
//             }
//         }
//         cout << "After Sorting\n";
//         for (int i = 0; i < 3; i++)
//         {
//             cout << marks[i] << " ";
//         }
//     }
// };

// int main()
// {
//     Student s;
//     s.display();
//     s.sort();
//     s.average();
// }

// Operator Overloading:
// Define a class called Complex to represent complex numbers. Overload the + operator to add two complex numbers and the << operator to display the complex number. Create two objects of the Complex class, add them using the overloaded + operator, and display the result.

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int n1;
//     int n2;
//     int i1;
//     int i2;

// public:
//     // Constructor:
//     Complex()
//     {
//         // Inputting the real Part:
//         cout << "Enter the number 1: ";
//         int num1;
//         cin >> num1;
//         n1 = num1;
//         cout << "Enter the number 2: ";
//         int num2;
//         cin >> num2;
//         n2 = num2;
//         // Inputting the Imaginary part:
//         cout << "Enter the Img1: ";
//         int img1;
//         cin >> img1;
//         i1 = img1;
//         cout << "Enter the Img2: ";
//         int img2;
//         cin >> img2;
//         i2 = img2;
//     }
//     // Methods:
//     void add()
//     {
//         i1, i2, n1, n2;
//         int realSum = n1 + n2;
//         int imgSum = i1 + i2;
//         cout << "The Addition \n";
//         cout << realSum << " + " << imgSum << "i" << endl;
//     }

//     void subract()
//     {
//         i1, i2, n1, n2;
//         int real = n1 - n2;
//         int img = i1 - i2;
//         cout << "The Difference \n";
//         cout << real << " + " << img << "i" << endl;
//     }

//     void display()
//     {
//         i1, i2, n1, n2;
//         cout << n1 << " + " << i1 << "i" << endl;
//         cout << n2 << " + " << i2 << "i" << endl;
//     }
// };

// int main()
// {
//     class Complex c;
//     c.display();
//     c.add();
//     c.subract();
// }

// 3. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// class Person
// {
// private:
//     string name;
//     int age;
//     string country;

// public:
//     // Constructor
//     Person(string myname, int myage, string mycountry)
//     {
//         name = myname;
//         age = myage;
//         country = mycountry;
//     }
//     // Member Function/ Methods;
//     void display()
//     {
//         name, age, country;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Country: " << country << endl;
//     }

//     void Reversing()
//     {
//         name, age, country;
//         string rname = name;
//         reverse(rname.begin(), rname.end());
//         string rc = country;
//         reverse(rc.begin(), rc.end());
//         cout << "After the reversing the name and country\n";
//         cout << rname << endl;
//         cout << rc << endl;
//     }
// };

// int main()
// {
//     class Person p1("madam", 23, "Pakistan");
//     p1.display();
//     p1.Reversing();
// }

// Task 3: Student Database
// Create a program to manage a student database. Define a structure Student with the following
// attributes: rollNumber (int), name (string), marks (float). Implement the following functionalities:
// 1. Input Student Data:
// Create a function inputStudentData that takes a Student object as a parameter and allows the user
// to input the roll number, name, and marks.
// 2. Display Student Data:
// Implement a function displayStudentData that takes a Student object as a parameter and displays its
// details.
// 3. Calculate Grade:
// Write a function calculateGrade that takes a Student object as a parameter and calculates the grade
// based on the marks. Display the grade.
// 4. Sort Student by Grade:
// Create a function sortStudentsByGrade that takes the array of students as a parameter and sorts
// them in ascending order based on grade. Display the sorted list.
// Operations:
// In the main program, allow the user to input data for multiple students and store them in an array.
// Display the details of all students, calculate and display their grades.

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     int roll;
//     string name;
//     int marks[5];

// public:
//     // Constructor:
//     Student()
//     {
//         cout << "Enter the Student Name: \n";
//         cin >> name;
//         cout << "Enter the Student Roll Number: \n";
//         cin >> roll;
//         cout << "Enter the Marks: \n";
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "Enter the marks" << i + 1 << " : ";
//             cin >> marks[i];
//         }
//     }
//     // Methods:
//     void average()
//     {
//         int total = 0;
//         for (int i = 0; i < 5; i++)
//         {
//             total += marks[i];
//         }
//         int avg = total / 5;
//         cout << "The average is " << avg << endl;
//     }

//     void sorting()
//     {
//         for (int i = 0; i < 5 - 1; i++)
//         {
//             for (int j = i + 1; j < 5; j++)
//             {
//                 if (marks[j] < marks[i])
//                 {
//                     int swap = marks[j];
//                     marks[j] = marks[i];
//                     marks[i] = swap;
//                 }
//             }
//         }
//         cout << "After the sorting\n";
//         for (int i = 0; i < 5; i++)
//         {
//             cout << marks[i] << " ";
//         }
//     }

//     char grades()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             marks[i];
//             if (marks[i] == 90)
//             {
//                 return 'A';
//             }
//             if (marks[i] == 80)
//             {
//                 return 'B';
//             }
//             if (marks[i] == 70)
//             {
//                 return 'C';
//             }
//             else
//             {
//                 return 'F';
//             }
//         }
//     }
// };

// int main()
// {
//     class Student s1;
//     s1.average();
//     s1.sorting();
//     cout << s1.grades();
// }

// . Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int rollNumber;
//     int marks;

// public:
//     // Constructor:
//     Student()
//     {

//     }
//     // Member Function:
//     void grades()
//     {
//         marks;
//         if (marks >= 90)
//         {
//             cout << "A+";
//         }
//         else if (marks >= 80)
//         {
//             cout << "B+";
//         }
//         else if (marks >= 70)
//         {
//             cout << "C+";
//         }
//         else
//             cout << "Fail";
//     }
// };

// int main()
// {
//     class Student s1;
//     s1.grades();
// }

// #include <iost

//

// TODO: Make class student containing attributes like string name, numofgrades and grades array
// TODO:  make function to take input of number of grades and the grades itself
// TODO:  from the grades make the scheme for giving the GRADING like a+ b+ etc

// #include <iostream>
// using namespace std;

// class Student
// {

// private:
//     int grades[100];
//     int numOfGrades;

// public:
//     Student()
//     {
//         numOfGrades = 0;
//         for (int i = 0; i < 100; i++)
//         {
//             grades[i] = 0;
//         }
//     }
//     void inputGrades()
//     {
//         cout << "Enter the Number of Grades: " << endl;
//         cin >> numOfGrades;

//         cout << "Enter the Grades: " << endl;
//         for (int i = 0; i < numOfGrades; i++)
//         {
//             cin >> grades[i];
//         }
//     }

//     void grading()
//     {
//         for (int i = 0; i < numOfGrades; i++)
//         {
//             char gradeLetter;

//             if (grades[i] >= 90)
//                 gradeLetter = 'A';
//             else if (grades[i] >= 80)
//                 gradeLetter = 'B';
//             else if (grades[i] >= 70)
//                 gradeLetter = 'C';
//             else if (grades[i] >= 60)
//                 gradeLetter = 'D';

//             cout << "Grades: " << (i + 1) << gradeLetter << endl;
//         }
//     }
// };

// int main()
// {
//     Student s;
//     s.inputGrades();
//     s.grading();
// }

#include <iostream>
using namespace std;

class Student
{
private:
    int grades[100];
    int numGrades;

public:
    Student()
    {
        numGrades = 0;
        for (int i = 0; i < 100; i++)
        {
            grades[i] = 0;
        }
    }
    void inputGrades()
    {
        cout << "Enter the number of Grades: " << endl;
        cin >> numGrades;

        cout << "Enter the Grades: " << endl;
        for (int i = 0; i < numGrades; i++)
        {
            cin >> grades[i];
        }
    }
    void grading()
    {
        for (int i = 0; i < numGrades; i++)
        {
            string gradeLetter;
            if (grades[i] >= 95)
                gradeLetter = "A+";

            else if (grades[i] >= 90)
                gradeLetter = "A";

            else if (grades[i] >= 85)
                gradeLetter = "B+";

            else if (grades[i] >= 80)
                gradeLetter = "B";

            cout << "Grade: " << (i + 1) << gradeLetter << endl;
        }
    }
};

int main()
{
    Student s;
    s.inputGrades();
    s.grading();
}