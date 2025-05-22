#include <iostream>

// int main()
// {
//     int x, y;
//     std ::cout << "Print first number: ";
//     std ::cin >> x;
//     std::cout << "Print second number: ";
//     std ::cin >> y;

//     if (x < y)
//     {
//         std ::cout << " Y is bigger then X ";
//     }
//     else
//     {
//         std ::cout << " Y is samller then X ";
//     }
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     std ::cout << "Enter two number";
//     std ::cin >> a >> b;
//     if (b == 0)
//     {
//         std::cout << "Division by Zero";
//     }
//     else
//     {
//         c = a / b;
//         std::cout << "result is : " << c << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     int age;
//     std ::cout << "Enter your age";
//     std ::cin >> age;

//      if (age < 12) {
//         std::cout << "You are a child";
//     }
//     else if (age >= 12 && age <= 50)
//     {
//         std ::cout << "You are younger";
//     }
//     else if (age > 50)
//     {
//         std ::cout << "You are older";
//     }
//     else{
//       std ::cout << "invalid age";
//     }
//     return 0;
// }

// int main()
// {
//     int age;
//     std ::cout << "Enter your age";
//     std ::cin >> age;

//     if (age < 12 || age > 50)
//     {
//         std ::cout << "You are Eligible";
//     }
//     else
//     {
//         std ::cout << "Not Eligible";
//     }
//     return 0;
// }

int main()
{
    int a, b, c;
    std ::cout << "Enter Numbers";
    std ::cin >> a >> b >> c;

    if (a > b && a> c)
    {
        std ::cout << a ;
    }
    else if(b>c)
    {
        std ::cout << b;
    }else{
         std ::cout << c;
    }
    return 0;
}