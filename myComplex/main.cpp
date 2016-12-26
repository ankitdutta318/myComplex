#include <iostream>
using namespace std;

#include "Complex.hpp"
#include "Complex.cpp"

using namespace Ankit;
 
int main() {
	// your code goes here
	// Two instantiations of template Complex
	Complex <> x1(30, 10);
	Complex <> x2(-20,30);
    
    cout << "The first complex number is: ";
    Complex<>::show(x1);
    cout << "The second complex number is: ";
    Complex<>::show(x2);
    
    Complex <> c = x1 + x2; // Addition operation
    cout << "The ADDITION of both complex numbers is: ";
    Complex<>::show(c);
    
    Complex <> d = x1 - x2; // Substraction operation
    cout << "The DIFFERENCE of both complex numbers is: ";
    Complex <>::show(d);
	
    Complex <> e = x1 * x2; // Multiplication operation of two Complex numbers
    cout << "The PRODUCT of both complex numbers is: ";
    Complex <>::show(e);

    Complex <> f = x1 * 3; // Multiplication operation with a constant
    cout << "The scalar MULTIPLICATION complex numbers is: ";
    Complex <>::show(f);
	
    Complex <> g = x1 / x2; // Division operation
    cout << "The DIVISION of both complex numbers is: ";
    Complex <>::show(g);
    
    Complex <> h = -x1;     // Conjugate operation
    cout << "The CONJUGATE of "; Complex <>::show(x1); cout << "is: ";
    Complex <>::show(h);
	
	return 0;
}