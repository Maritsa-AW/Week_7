#include <iostream>
using namespace std;

int factorial(int n) { // n = 5
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

// faktorial(n);
// faktorial(5);
//
// faktorial(5) = 5 * faktorial(5-1) 
// faktorial(4) = 4 * faktorial(4-1)
// faktorial(3) = 3 * faktorial(3-1) 
// faktorial(2) = 2 * faktorial(2-1) 
// faktorial(1) = 1
//
// faktorial(5) = 5 * faktorial(4) = 5 * 24 = 120
// faktorial(4) = 4 * faktorial(3) = 4 * 6 = 24
// faktorial(3) = 3 * faktorial(2) = 3 * 2 = 6
// faktorial(2) = 2 * faktorial(1) = 2 * 1 = 2
// faktorial(1) = 1







