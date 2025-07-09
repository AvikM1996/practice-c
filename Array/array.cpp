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

// linear search
// int main()
// {
//     int i, a[] = {2, 30, 5, 6, 7, 1, 10}, key;
//     int size = sizeof(a) / sizeof(a[0]);
//     std ::cout << "Enter key";
//     std ::cin >> key;

//     for (i = 0; i < size; i++)
//     {
//         if (key == a[i])
//         {
//             std::cout << "Key is found at index " << i << std::endl;
//             return 0;
//         }
//     }
//     std::cout << "key not found";
//     return 0;
// }
// minimum number
// int main()
// {
//     int i, a[] = {2, 0, 1, 2, 3, 10, -1, 6}, sum = 0;
//     int size = sizeof(a) / sizeof(a[0]);

//     for (i = 0; i < size; i++)
//     {
//         if(a[0] > a[i]){
//             a[0]=a[i];
//         }
//     }
//     std::cout << a[0];
//     return 0;
// }

// maximum number

// int main()
// {
//     int i, a[] = {2, 0, 1, 2, 3, 10, -1, 6}, sum = 0;
//     int size = sizeof(a) / sizeof(a[0]);

//     for (i = 0; i < size; i++)
//     {
//         if(a[0] > a[i]){
//             a[0]=a[i];
//         }
//     }
//     std::cout << a[0];
//     return 0;
// }

// Binary search
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int size = sizeof(a) / sizeof(a[0]);
//     int left = 0, right = size - 1, key,mid;

//     std ::cout << "Enter key";
//     std::cin >> key;

//     while (left <= right)
//     {
//         mid = (left + right) / 2;
//         if (key == a[mid])
//         {
//             std::cout << mid;
//             return 0;
//         }
//         else if (key < a[mid])
//         {
//           right=mid-1;
//         }else{
//             left=mid+1;
//         }
//     }
//     std:: cout<< "Not found";
// }

// int main()
// {
//     int a, j, i;
//     std::cout << "ender a number";
//     std ::cin >> a;
//     for (i = 0; i < a; i++)
//     {
//         for (j = 0; j < a; j++)
//         {
//             std::cout << i << j << std::endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n = 9;
//     int a[] = {2, 3, 4, 5, 9, 10, 11, 12, 13, 22};
//     int length = sizeof(a) / sizeof(a[0]);

//     int low = 0;
//     int high = 9;

//     int key;
//     std::cout << "Enter key : ";
//     std::cin >> key;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (key == a[mid])
//         {
//             std::cout << "found it at index : " << mid;
//             return 0;
//         }
//         else if (key < a[mid])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }

//     std::cout << "not found";
// }

// int main()
// {
//     int a[] = {2, 4, 5, 7, 23, 45, 65};
//     int low = 0;
//     int high = 7;
//     int mid;
//     int key;
//     std::cout << "Enter key : ";
//     std::cin >> key;

//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (key == a[mid])
//         {
//             std::cout << "found it at index : " << mid;
//             return 0;
//         }
//         else if (key < a[mid])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
// }

// Nasted Loop

// int main()
// {
//     int num, i;

//     std::cout << "enter a number : ";
//     std::cin >> num;

//     for (i = 1; i <= num; i++)
//     {
//     //   std::cout <<"Step : "<< i << std::endl;
//       for (int j = 1; j <= i; j++){
//         std::cout << j << std::endl;
//       }

//     }
//     return 0;

// }

// squre pattern
int main()
{
    int key, count = 1;
    std::cout << "enter a number : ";
    std::cin >> key;
    for (int i = 1; i <= key; i++)
    {
        for (int j = 1; j <= key; j++)
        {
            std::cout << count<<" ";
            count++;
        }
        std::cout << std::endl;
    }

    return 0;
}