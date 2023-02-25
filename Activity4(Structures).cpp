#include<iostream>
using namespace std;

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
Complex addComplex(Complex n1, Complex n2) {
    Complex sum;
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;
    return sum;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex n1, Complex n2) {
    Complex diff;
    diff.real = n1.real - n2.real;
    diff.imag = n1.imag - n2.imag;
    return diff;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex n1, Complex n2) {
    Complex prod;
    prod.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    prod.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
    return prod;
}

int main() {
    Complex num1, num2, sum, diff, prod;
    
    // Get the first complex number from user
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;
    
    // Get the second complex number from user
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;
    
    // Add the two complex numbers
    sum = addComplex(num1, num2);
    
    // Subtract the two complex numbers
    diff = subtractComplex(num1, num2);
    
    // Multiply the two complex numbers
    prod = multiplyComplex(num1, num2);
    
    // Print the results
    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;
    cout << "Difference = " << diff.real << " + " << diff.imag << "i" << endl;
    cout << "Product = " << prod.real << " + " << prod.imag << "i" << endl;
    
    return 0;
}
