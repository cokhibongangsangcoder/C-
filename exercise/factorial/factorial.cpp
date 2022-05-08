// For loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     long double factorial = 1.0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     if (n < 0)
//         cout << "Error! Factorial of a negative number doesn't exist.";
//     else {
//         for(int i = 1; i <= n; ++i) {
//             factorial *= i;
//         }
//         cout << "Factorial of " << n << " = " << factorial << endl;    
//     }

//     return 0;
// }


// Recursion
#include<iostream>
using namespace std;

int factorial(int n);

int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n) << endl;

  return 0;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}