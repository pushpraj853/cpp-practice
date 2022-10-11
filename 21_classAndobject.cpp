#include <bits/stdc++.h>
using namespace std;

//* Access Specifier
// class MyClass
// {
// public:
//   int x;

// private:
//   int y;
// };

// int main()
// {
//   MyClass myObj;
//   myObj.x = 25;
//   myObj.y = 50; // it will give an error bcos y is private member
//   return 0;
// }

//* Encapsulation
// class Employees
// {
// private:
//   int salary;

// public:
//   string name;
//   void setSalary(int s)
//   {
//     salary = s;
//   }
//   int getSalary()
//   {
//     return salary;
//   }
// };
// int main()
// {
//   Employees e1;
//   e1.setSalary(50000);
//   cout << e1.getSalary() << endl;
// }

//* Inheritance

// // Base Class
// class Vehicle
// {
// public:
//   string brand = "Ford";
//   void honk()
//   {
//     cout << "oink oink\n";
//   }
// };

// // Derived Class
// class Car : public Vehicle
// {
// public:
//   string model = "Mustand";
// };

// int main()
// {
//   Car myCar;
//   myCar.honk();
//   cout << myCar.brand + " " + myCar.model;
//   return 0;
// }

//* Types of Inheritance

//* Multilevel Inheritance

// // Base Class (Parent)
// class MyClass
// {
// public:
//   void myFunction()
//   {
//     cout << "I'm in Base Class but Grand Child is calling me using Inheritance";
//   }
// };
// // Derived Class (Child)
// class MyChild : public MyClass
// {
// };

// // Derived Class (grandChild)
// class MyGrandChild : public MyChild
// {
// };

// int main()
// {
//   MyGrandChild myObj;
//   myObj.myFunction(); // using object of GrandChild Class
//                       // we are invoking method of Base Class
//   return 0;
// }

//* Multiple Inheritance
// class MyClass1
// {
// public:
//   void myFunction()
//   {
//     cout << "I'm from Base-Class-1" << endl;
//   }
// };

// class MyClass2
// {
// public:
//   void myOtherFuntion()
//   {
//     cout << "I'm from Base-class-2" << endl;
//   }
// };

// class MyChildClass : public MyClass1, public MyClass2
// {
// };

// int main()
// {
//   MyChildClass myObj;
//   myObj.myFunction();
//   myObj.myOtherFuntion();
//   return 0;
// }

//* Access Specifier "protected"
//  is similar to private, but it can also be
// accessed in the inherited class other than its own class

// class Employee
// {
// protected:
//   int salary;
// };

// class Programmer : public Employee
// {
// public:
//   int bonus;
//   void setSalary(int s)
//   {
//     salary = s; // here we are accessing salry from parent class
//   }
//   int getSalary()
//   {
//     return salary;
//   }
// };

// int main()
// {
//   Programmer pg1;
//   pg1.setSalary(50000);
//   pg1.bonus = 15000;
//   cout << "Salary: " << pg1.getSalary() << "\n";
//   cout << "Bonus: " << pg1.bonus << '\n';
//   return 0;
// }

//* Diamond Problem in Inheritance
//               Base Class(Car)

// Class1(Gasoline)              Class2(Electric)

//               Hybrid Class

// class Car
// {
// public:
//   Car()
//   {
//     cout << "Car Constructor" << endl;
//   }
// };

// class Electric : public Car
// {
// public:
//   Electric()
//   {
//     cout << "Electric Constructor" << endl;
//   }
// };

// class Gasoline : public Car
// {
// public:
//   Gasoline()
//   {
//     cout << "Gasoline Constructor" << endl;
//   }
// };

// class Hybrid : public Electric, public Gasoline
// {
// public:
//   Hybrid()
//   {
//     cout << "Hybrid Constructor" << endl;
//   }
// };

// int main()
// {
//   Hybrid h;
//   return 0;
// }

//* PolyMorphism
// Function with same name gives different results
// based on who is calling that function.

// class Animals
// {
// public:
//   void AnimalSound()
//   {
//     cout << "Animal makes a sound"
//          << "\n";
//   }
// };

// class Dog : public Animals
// {
// public:
//   void AnimalSound()
//   {
//     cout << "Woof Woof"
//          << "\n";
//   }
// };

// class Cat : public Animals
// {
// public:
//   void AnimalSound()
//   {
//     cout << "Meow Meow"
//          << "\n";
//   }
// };

// int main()
// {
//   Animals animal;
//   Dog d1;
//   Cat c1;

//   // We have multiple function with same name
//   // but each function is working differently
//   // given who is calling the funtion.
//   animal.AnimalSound();
//   d1.AnimalSound();
//   c1.AnimalSound();
//   return 0;
// }

//*Overloading

//* 1)Funtion Overloading
// Multiple function with same name but differ in
// either number of Arguments or data-types of argument
//? Check: Can we do function overloading without classes and object

// class Calculate
// {
// public:
//   int add(int a, int b)
//   {
//     return a + b;
//   }
//   int add(int a, int b, int c)
//   {
//     return a + b + c;
//   }
// };
// int main()
// {
//   Calculate c;
//   cout << c.add(10, 20) << "\n";
//   cout << c.add(12, 20, 23) << '\n';
//   return 0;
// }

//* 2)Operator Overloading
// Syntax:
// returnType operator symbol (arguments) {
//            ... .. ...
// }

// https://www.programiz.com/cpp-programming/operator-overloading

// class Complex
// {
// private:
//   int real, imag;

// public:
//   Complex(int r = 0, int i = 0)
//   {
//     real = r;
//     imag = i;
//   }

//   Complex operator+(Complex const &obj) // part inside the parentheses is syntax
//   {
//     Complex result;
//     result.real = real + obj.real;
//     result.imag = imag + obj.imag;
//     return result;
//   }

//   void print()
//   {
//     cout << real << " + i" << imag << "\n";
//   }
// };

// int main()
// {
//   Complex c1(10, 5), c2(2, 4);
//   // c1 calls the operator function
//   // c2 is passed as an argument to the function
//   Complex c3 = c1 + c2;
//   c3.print();
// }