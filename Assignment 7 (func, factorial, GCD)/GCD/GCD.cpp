#include <iostream>
using namespace std;

int gcd(int a, int b) { // a = 240; b = 72;
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;
    cout << "Enter number A: ";
    cin >> num1;
	cout << "Enter number B: ";
	cin >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    
    return 0;
}

// a = 240; b = 72;
// gcd(240, 72) 
//
// gcd(72, 240 % 72)
// a = 72; b = 240 % 72 = 24
//
// gcd(24, 72 % 24)
// a = 24; b = 0;
