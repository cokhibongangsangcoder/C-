// C++ program to swap two numbers using
// pass by value
// #include <iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int z = a;
//     a = b;
//     b = z;
//     cout << "During swap\n";
//     cout << "a = " << a << " b = " << b << "\n";
// }
 
// int main()
// {
//     int a = 45, b = 35;
//     cout << "Before Swap\n";
//     cout << "a = " << a << " b = " << b << "\n";
 
//     swap(a, b);
 
//     cout << "After Swap with pass by value\n";
//     cout << "a = " << a << " b = " << b << "\n";
// }


// C++ program to swap two numbers using
// pass by reference
// #include <iostream>
// using namespace std;
// void swap(int& a, int& b)
// {
//     int z = a;
//     a = b;
//     b = z;
//     cout << "During swap\n";
//     cout << "a = " << a << " b = " << b << "\n";
// }
 
// int main()
// {
//     int a = 45, b = 35;
//     cout << "Before Swap\n";
//     cout << "a = " << a << " b = " << b << "\n";
 
//     swap(a, b);
 
//     cout << "After Swap with pass by reference\n";
//     cout << "a = " << a << " b = " << b << "\n";
// }



//C++ program to swap two numbers using
//pass by pointer
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int z = *a; // dereference, *a mean value that a point to, z = 45
    *a = *b; // dereference, value that b point to = value that b point to, a = 35
    cout << "During Swap 1 \n";
    cout << "a = " << *a << " b = " << *b << "\n";
    *b = z; // dereference, value that b point to = z, b = 45
    cout << "During Swap 2 \n";
    cout << "a = " << *a << " b = " << *b << "\n";
}
 
// Driver Code
int main()
{
    int a = 45, b = 35;
    int* p1 = &a;
    int* p2 = &b;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
 
    swap(p1, p2);
 
    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";
}