#include <bits/stdc++.h>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to greet
void greet() {
    cout << "Hello, welcome to our college - AITAM" << endl;
}

// Function to multiply two numbers
int multiply(int x, int y) {
    return x * y;
}

int main() {
    // Calling greet function (no parameters)
    greet();

    // Using add function
    int sum = add(5, 3);
    cout << "Sum of 5 and 3 is: " << sum << endl;

    // Using multiply function
    int product = multiply(4, 6);
    cout << "Product of 4 and 6 is: " << product << endl;

    return 0;
}
