
#include <iostream>
using namespace std;

int add(int n, int m) {
    return n + m;
}

int sub(int n, int m) {
    return n - m;
}

int multiply(int n, int m) {
    return n * m;
}

int divide(int n, int m) {
    if (m != 0) {
        return n / m;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle error as needed
    }
}

int main() {
    int n = 5;
    int m = 4;

    // Perform calculations
    int sum = add(n, m);
    int difference = sub(n, m);
    int product = multiply(n, m);
    int quotient = divide(n, m);

    // Output results
    cout << "Hello, World!" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
