#include <iostream>
// int main()
// {
//     int a[5] = {2, 3, 4, 5, 6};
//     std::cout << a[1];
//     return 0;
// }

// int main(){
//     char a[] = {'A',66,'c', 68};
//     for(int num:a){
//         std:: cout << num << std::endl;
//     }
//     return 0;
// }

// sum of array element

// int main()
// {
//     int i, sum = 0;
//     int a[] = {3, 4, 5};
//     int size = sizeof(a) / sizeof(a[0]);
//     for (i = 0; i < size; i++)
//     {
//         sum = sum + a[i];
//     }
//     std::cout << sum;

//     return 0;
// }

// find maximum of array element

// int main()
// {
//     int i, a[] = {2, 30, 5, 6, 7, 1, 10};
//     int size = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < size; i++)
//     {
//         if(a[i]>a[0]){
//             a[0]=a[i];
//         }
//     }
//     std::cout << a[0];
//     return 0;
// }

int main()
{
    int i, a[] = {2, 30, 5, 6, 7, 1, 10}, key;
    int size = sizeof(a) / sizeof(a[0]);
    std ::cout << "Enter key";
    std ::cin >> key;

    for (i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            std::cout << "Key is found at index " << i << std::endl;
            return 0;
        }
    }
    std::cout << "key not found";
    return 0;
}