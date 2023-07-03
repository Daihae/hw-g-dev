#include <iostream>
#include <iomanip>
#include <limits>

enum class WeekDays 
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

int main()
{
    std::cout << "HW 1.\n";

    int a, b, temp;
    std::cout << "Enter integer 1: ";
    std::cin >> a;
    std::cout << "Enter integer 2: ";
    std::cin >> b;
    temp = a;
    a = b;
    b = temp;
    std::cout << "Integer 1: " << a << std::endl;
    std::cout << "Integer 2: " << b << std::endl;


    std::cout << "HW 2.\n";

    double c;
    int ci;
    std::cout << "Enter number for task 2 ";
    std::cin >> c;
    ci = int(c);
    std::cout << "Number for task 2 (Double) = " << c << std::endl;
    std::cout << "Number for task 2 (int) = " << ci << std::endl;
    std::cout << "Number for task 2 ($) = " << std::setw(20) << std::setfill('$') << std::right << c << std::endl;


    std::cout << "HW 3.\n";

    double d = 3.14159265358;

    std::cout << "Standart = " << d << std::endl;
    std::cout << "e2 = " << std::scientific << std::setprecision(2) << d << std::endl;
    std::cout << "e5 = " << std::scientific << std::setprecision(5) << d << std::endl;
    std::cout << "e10 = " << std::scientific << d << std::endl;


    std::cout << "HW 4.\n";

    int w;
    bool wd = true;
    w = bool(wd);
    std::cout << "Enter number for task 4 ";
    std::cin >> w;
    std::cout << std::boolalpha << bool(w) << std::endl;

}

