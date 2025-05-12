#include<iostream>
#include <string>

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

int main()
{
    std ::string name; // string variable
    std::cout << "ENTER YOUR NAME: ";
    // std::cin >> name; // input operator
    std::getline(std::cin, name);
    std::cout << "HELLO " <<  name  << " WELCOME TO C++ PROGRAMMING"; // output operator
}