#include <iostream>
#include <cmath>
using namespace std;
// Problem 1:  Find square root using iterative method

double sqrtIterative(double num) {
    if (num < 0)
        return -1; 		// Error: cannot take negative number square root
        
	
    
	if (num == 0 || num == 1)
        return num;

    double x = num;
    double y = 1;
    double epsilon = 0.00001;
    
	// Change epsilon based on precision requirement
    
	while (abs(x - y) > epsilon) {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}

// Problem 2: Function to compute GCD using Euclid's method

int gcd(int a, int b) 
{
    while (a != 0) 
	{
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int main() 
{
    int choice;
    cout << "Enter 1 to test Problem 1 (Square Root) or 2 to test Problem 2 (GCD): ";
    cin >> choice;

    if (choice == 1) 
	{
        double num;
        cout << "Enter a number to find its square root: ";
        cin >> num;

        double sqrtResult = sqrtIterative(num);
        if (sqrtResult == -1)
            cout << "Cannot find square root of a negative number.\n";
        else
            cout << "Square root using iterative method: " << sqrtResult << endl;

        // Check with math library sqrt function
        
        double sqrtLibrary = sqrt(num);
        cout << "Square root using math library: " << sqrtLibrary << endl;
    } 
	else if (choice == 2) 
	{
        int a, b;
        cout << "Enter two numbers to find their GCD: ";
        cin >> a >> b;

        int gcdResult = gcd(a, b);
        cout << "GCD of " << a << " and " << b << " is: " << gcdResult << endl;
    } 
	else 
	{
        cout << "Invalid choice.\n";
    }

    return 0;
}

