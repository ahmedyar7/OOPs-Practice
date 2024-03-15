// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     friend Complex sumComplex(Complex o1, Complex o2);
//     void set_number(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << a << "+"
//              << "i" << b << endl;
//     }
// };
// Complex sumComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.set_number((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }
// int main()
// {
//     Complex c1, c2, sum;
//     c1.set_number(1, 4);
//     c2.set_number(5, 8);
//     sum = sumComplex(c1, c2);

//     sum = sumComplex(c1, c2);
//     sum.printNumber();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int a, b;

// public:
//     friend Complex sumComplex(Complex o1, Complex o2);
//     friend Complex DiffComplex(Complex o1, Complex o2);
//     void setNumber(int num1, int num2)
//     {
//         a = num1;
//         b = num2;
//     }
//     void printNumber()
//     {
//         cout << a << "+" << b << "i" << endl;
//     }
// };

// Complex sumComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o2.b + o2.b));
//     return o3;
// }
// Complex DiffComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.setNumber((o1.a - o2.a), (o2.b - o2.b));
//     return o3;
// }

// int main()
// {
//     Complex c1, c2, result, result2;

//     c1.setNumber(10, 10);
//     c2.setNumber(20, 30);

//     result = sumComplex(c1, c2);
//     result.printNumber();

//     result2 = DiffComplex(c1, c2);
//     result2.printNumber();
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Employee
// {
// private:
//     string name;
//     double salary;

// public:
//     friend Employee salaryRaise(Employee &emp, int raisePercent);
//     void set_data(string e_name, double e_salary)
//     {
//         name = e_name;
//         salary = e_salary;
//     }
//     void printData()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// Employee salaryRaise(Employee &emp, int raisePercent)
// {
//     int result = emp.salary * (raisePercent / 100);
//     emp.salary += raisePercent;
//     cout << emp.salary << endl;
// }

// int main()
// {
//     Employee e1, res;
//     e1.set_data("AhmedYar", 20000.00);
//     e1.printData();

//     res = salaryRaise(e1, 20);
// }

// Define a class BankAccount with private data members balance and accountNumber. Create a friend function void transfer(BankAccount &from, BankAccount &to, double amount) to transfer a specified amount from one account to another

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     string name;
//     double balance;

// public:
//     friend BankAccount transfer(BankAccount &acc, double amount);
//     friend BankAccount withdrawl(BankAccount &acc, double amount);
//     void setData(string acc_name, double acc_balance)
//     {
//         name = acc_name;
//         balance = acc_balance;
//     }
// };

// BankAccount transfer(BankAccount &acc, double amount)
// {
//     acc.balance += amount;
//     cout << acc.balance << endl;
// }

// BankAccount withdrawl(BankAccount &acc, double amount)
// {
//     if (amount <= acc.balance)
//     {
//         acc.balance -= amount;
//     }
//     cout << acc.balance << endl;
// }

// int main()
// {
//     BankAccount account, result, resutl2;
//     account.setData("Ahmed Yar", 200.00);
//     result = transfer(account, 500.00);

//     resutl2 = withdrawl(account, 200.00);

//     return 0;
// }

// Implement a class Matrix to represent a 3x3 matrix.Define a friend function Matrix addMatrices(Matrix &m1, Matrix &m2) to add two matrices and return the result.

// #include <iostream>
// using namespace std;

// class Matrix
// {
// private:
//     int array[3][3];

// public:
//     friend Matrix addMatrix(Matrix &m1, Matrix &m2);
//     friend Matrix subtractMatrix(Matrix &m1, Matrix &m2);
//     void setData()
//     {
//         cout << "Enter the elements" << endl;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cin >> array[i][j];
//             }
//         }
//     }
//     void printData()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cout << array[i][j] << "  ";
//             }
//             cout << " \n\n";
//         }
//     }
// };

// Matrix addMatrix(Matrix &m1, Matrix &m2)
// {
//     Matrix result;
//     int sum[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             result.array[i][j] = m1.array[i][j] + m2.array[i][j];
//         }
//     }
//     return Matrix(result);
// }

// Matrix subtractMatrix(Matrix &m1, Matrix &m2)
// {
//     Matrix result;
//     int subtract[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             result.array[i][j] = m1.array[i][j] - m2.array[i][j];
//         }
//     }
// }

// int main()
// {

//     Matrix m1, m2, result, result2;

//     m1.setData();
//     m1.printData();

//     m2.setData();
//     m2.printData();

//     result = addMatrix(m1, m2);
//     result.printData();

//     result2 = subtractMatrix(m1, m2);
//     result2.printData();

//     return 0;
// }

// Write a C++ program to implement a class called BankAccount with private members balance, accountNumber, and ownerName. Implement a friend function named transferFunds that transfers funds between two BankAccount objects.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    double balance;
    string accountNumber;

public:
    friend BankAccount deposit(BankAccount &obj, int amount);
    friend BankAccount withdraw(BankAccount &obj, int amount);
    friend BankAccount transfer(BankAccount &obj1, BankAccount &obj, int amount);

    BankAccount(string name, double balance, string accountNumber)
    {
        this->name = name;
        this->balance = balance;
        this->accountNumber = accountNumber;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};
// Friend Function

BankAccount deposit(BankAccount &obj, int amount)
{
    obj.balance += amount;
    cout << obj.balance << endl;
}
BankAccount withdraw(BankAccount &obj, int amount)
{
    if (amount <= obj.balance)
    {
        obj.balance -= amount;
        cout << obj.balance << endl;
    }
    else
        cout << "This transaction in not possible " << endl;
}
BankAccount transfer(BankAccount &obj1, BankAccount &obj2, int amount)
{
    if (amount <= obj1.balance)
    {
        obj1.balance -= amount;
        obj2.balance += amount;
        cout << "Amount Transfered from acc1 to acc2 " << endl;
        cout << obj2.balance << endl;
    }
    else if (amount <= obj2.balance)
    {
        obj2.balance -= amount;
        obj1.balance += amount;
        cout << "Amount Transfered from acc2 to acc1 " << endl;
        cout << obj1.balance << endl;
    }
}

int main()
{

    BankAccount b1("Ahmed Yar", 100.0, "1001");
    BankAccount b2("Asjaad ", 200.0, "1002");

    transfer(b1, b2, 100);

    // deposit(b1, 100);
    // withdraw(b1, 900);

    return 0;
}