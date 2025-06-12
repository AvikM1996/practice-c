#include <iostream>
#include <typeinfo>
// int main()
// {
//     int n;
//     std ::cout << "Enter a number";
//     std ::cin >> n;
//     while (n > 0)
//     {
//         std :: cout << "Loop started. Current n = " << n << std::endl;
//         std::cout << "Before decrement, n = " << n << std::endl;
//         n--;
//         std::cout << "After decrement, n = " << n << std::endl;
//         std::cout << "Loop ends for this round.\n" << std::endl;
//     };
//     std::cout << "Loop exited. Final n = " << n << std::endl;
//     return 0;
// }

// int main()
// {
//     int n = 4;
//     while (n >= 0)
//     {
//         std::cout << n << std::endl;
//         n--;
//     }
//     return 0;
// }

// int main()
// {
//     int n = 5;
//     // std ::cout << "Enter a number : ";
//     // std ::cin >> n;
//     do
//     {
//         std ::cout << n << std ::endl;
//         n--;
//     } while (n > 0);
//     return 0;
// }

// int main()
// {
//     int n, temp, i;
//     std ::cout << "Enter number";
//     std ::cin >> n;
//     for (i = 1; i <= 10; i++)
//     {
//         temp = n * i;
//         std::cout << temp << std::endl;
//     }
//     return 0;
// }

// for loop
// int main()
// {
//     int i, a, temp = 0;
//     std ::cout << "Enter number :";
//     std ::cin >> a;
//     for (i = 1; i <= a; i++)
//     {
//         temp = temp + i;
//     }
//     std ::cout << temp << std::endl;

//     return 0;
// }

// do while

// int main()
// {
//     int i=1, a, temp = 0;
//     std ::cout << "Enter number :";
//     std ::cin >> a;

//     do
//     {
//         // i = 1;
//         temp = temp + i;
//         i++;
//     } while (i <= a);

//     // for (i = 1; i <= a; i++)
//     // {
//     //     temp = temp + i;
//     // }
//     std ::cout << temp << std::endl;

//     return 0;
// }

// while loops
// int main()
// {
//     int i=1, a, temp = 0;
//     std ::cout << "Enter number :";
//     std ::cin >> a;
//     while (i <= a){
//         temp = temp + i;
//         i++;
//     }
//     std ::cout << temp << std::endl;

//     return 0;
// }
// Missing Number

// int main()
// {
//     int  nums = [3,0,1]

//     while (i <= a){
//         temp = temp + i;
//         i++;
//     }
//     std ::cout << temp << std::endl;

//     return 0;
// }

int main()
{
    int n, temp, sum = 0,m;
    std ::cout << "Enter a number";
    std ::cin >> n;
    std:: cout << typeid(n).name() <<std :: endl;
    m=n;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        sum = sum + temp * temp * temp;
        std ::cout << sum << std ::endl;
    }
    if (sum == m)
    {
        std ::cout << "Armstrong number";
    }
    else
    {
        std ::cout << "Armstrong number not";
    }
    return 0;
}