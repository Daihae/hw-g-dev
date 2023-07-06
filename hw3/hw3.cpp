#include <iostream>
#include <iomanip>
#include <limits>
#include <math.h>



int main()
{
    std::cout << "Hw 1.\n";

    int x, s, m, h;
    std::cout << "Enter seconds: ";
    std::cin >> x;
    m = x / 60;
    s = x % 60;
    h = m / 60;
    m = m % 60;
    std::cout << h << " hour, " << m << " minutes, " << s << " seconds";


    std::cout << "Hw 2.\n";
    double a, b, c;
    std::cout << "Whrite 3 numbers; ";
    std::cin >> a >> b >> c;
    std::cout << "+ " << a + b + c << std::endl;
    std::cout << "* " << a * b * c << std::endl;
    std::cout << "/3 " << double((a + b + c) / 3) << std::endl;
    std::cout << "Is the first number bigger than second? " << std::boolalpha << bool(a > b) << std::endl;
    std::cout << "Is the second number bigger than third? " << std::boolalpha << bool(b > c) << std::endl;


    std::cout << "Hw 3.\n";

    int d, e;
    std::cout << "Whrite 2 numbers: ";
    std::cin >> d >> e;
    std::cout << "First less than secon? " << (d < e) << std::boolalpha << std::endl;
    std::cout << "First equal secon? " << (d == e) << std::boolalpha << std::endl;
    std::cout << "First more than secon? " << (d > e) << std::boolalpha << std::endl;
    std::cout << "First less Or equal secon? " << (d <= e) << std::boolalpha << std::endl;

    std::cout << "Hw 4.\n";
     
    double wd, he;
    std::cout << "At first write width then height: ";
    std::cin >> wd >> he;
    std::cout << "S = " << wd * he << std::endl;
    std::cout << "P = " << (wd + he) * 2 << std::endl;


    std::cout << "Hw 5.\n";

    double r;
    const float pi = 3.141592;
    std::cout << "Whrite circle radius: ";
    std::cin >> r;
    std::cout << "Area of the circle: " << pi *(pow(r, 2)) << std::endl;
    std::cout << "Lenght of the circle: " << pi *2 * r << std::endl;


}