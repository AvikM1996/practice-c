// #include <iostream>
// #include <string>

// // using namespace std; // using directive
// int main() {
//     std:: cout << "Hello, World!";   //<< insertion operator
//     return 0;
// }

// Adding two numbers

// int main(){
//     int a,b,c;
//     std:: cout<< "ENTER FIRST NUMBER: ";
//     if(!(std:: cin>> a)){
//          std::cout << "Invalid input for the first number.\n";
//         return 1; // exit with error code
//     }

//     std :: cout<< "ENTER SECOND NUMBER: ";
//     if(!(std:: cin>> b)){
//         std:: cout<< "Invalid input. Please enter a number.\n";
//         return 1; // exit with error code
//     }
//     c=a+b;
//     std:: cout<< "SUM OF TWO NUMBERS: " << c; // << insertion operator
//     return 0; // return statement
// }

// Ask User Name and print

// int main()
// {
//     std ::string name; // string variable
//     std::cout << "ENTER YOUR NAME: ";
//     // std::cin >> name; // input operator
//     std::getline(std::cin, name);
//     std::cout << "HELLO " <<  name  << " WELCOME TO C++ PROGRAMMING"; // output operator
// }

#include <iostream>
#include <cmath>
#include <bitset>

// int main()
// {
//     int c, b, h;

//     std::cout << "Enter height: ";
//     std::cin >> h; // Use cin to take input

//     std::cout << "Enter base: ";
//     std::cin >> b;

//     c = (b * h) / 2;

//     std::cout << "Area of triangle: " << c << std::endl;

//     return 0; // Good practice to include return
// }

// finding sum of first n natarual number

// int main()
// {
//     int n, op;
//     std :: cout << "Enter a number : ";
//     std :: cin >> n;
//     op = n * (n + 1) / 2;
//     std :: cout << "find the sum of n number :" << op << std::endl;
//     return 0;
// }

// findings root of quadraic equation

// int main()
// {
//     int r1, r2, a, b, c;

//     std::cout << "Enter first number :";
//     std ::cin >> a;
//     std::cout << "Enter second number :";
//     std ::cin >> b;
//     std::cout << "Enter third number :";
//     std ::cin >> c;

//     r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//     r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

//     std::cout << "result 1" << r1 << std::endl;
//     std::cout << "result 2" << r2 << std::endl;

//     return 0;
// }

// area of cycle

// int main()
// {
//     double r, result;
//     const double pai = 3.14;
//     std::cout << "Enter second number :";
//     std ::cin >> r;
//     result = pai * r * r;

//     std::cout << "result :" << result << std::endl;
//     return 0;
// }

// int main()
// {
//     double r, result;
//     const double pai = 3.14;
//     std::cout << "Enter second number :";
//     std ::cin >> r;
//     result = pai * r * r;

//     std::cout << "result :" << result << std::endl;
//     return 0;
// }

// compound assignment

// int main(){
//     int a,sum;

//     std :: cout << "enter number of a " << std :: endl;
//     std :: cin >> a ;
//     std :: cout << "enter number of sum " << std :: endl;
//     std :: cin >> sum ;

//     sum-=a;
//     std :: cout << "result is " << sum << std:: endl;
//     return 0;

// }

// preincrement and post increment

// int main(){
//     int a=5;
//     int y;

//     y=a++;
//     std:: cout << "post print x " << a << std :: endl;
//     std :: cout << "post print y " << y << std :: endl;

//      y=++a;
//     std:: cout << "pre print x " << a << std :: endl;
//     std :: cout << "pre print y " << y ;
//     return 0;
// }

// Bitwise oparetor
void printBinary(int n, const std::string& label) {
    std::cout << label << " = " << std::bitset<8>(n) << std::endl;
}

int main()
{
    int a = 5, b = 3;

    std::cout << "Decimal values:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "\nBinary values:\n";
    printBinary(a, "a");
    printBinary(b, "b");

    std::cout << "\nBitwise Operations (Decimal and Binary):\n";

    int result;

    result = a & b;
    std::cout << "a & b = " << result << " → ";
    printBinary(result, "");

    result = a | b;
    std::cout << "a | b = " << result << " → ";
    printBinary(result, "");

    result = a ^ b;
    std::cout << "a ^ b = " << result << " → ";
    printBinary(result, "");

    result = ~a;
    std::cout << "~a = " << result << " → ";
    printBinary(result, "");

    result = a << 1;
    std::cout << "a << 1 = " << result << " → ";
    printBinary(result, "");

    result = a >> 1;
    std::cout << "a >> 1 = " << result << " → ";
    printBinary(result, "");

    return 0;
}