#include "Complex.hpp"

namespace Ankit {
    // overloaded '+' operators
    template <typename T1, typename T2>
    Complex<T1, T2> Complex<T1, T2>::operator + (Complex <T1, T2> a)  
    {
        Complex <>c(0, 0); // no default constructor was available
        
        c._real = a._real + this->_real;
        c._imaginary = a._imaginary + this->_imaginary;

        return c;
    }

    // overloaded '-' operator
    template <typename T1, typename T2>
    Complex<T1, T2> Complex<T1, T2>::operator - (Complex <T1, T2> a) 
    {
        Complex <>c(0,0); // no default contructor was available
        
        c._real = a._real - this->_real;
        c._imaginary = a._imaginary - this->_imaginary;

        return c;
    }

    // overloaded '*' operator fir complex multiplication
    template <typename T1, typename T2>
    Complex<T1, T2> Complex<T1, T2>::operator * (Complex <T1, T2> a) 
    {
        Complex <>c(0,0); // no default contructor was available
        
        c._real = (this->_real * a._real) - (this->_imaginary * a._imaginary);
        c._imaginary = (this->_imaginary * a._real) + (this->_real * a._imaginary);
        return c;
    }

    // overloaded '*' operator fir scalar multiplication
    template <typename T1, typename T2>
    Complex<T1, T2> Complex<T1, T2>::operator * (int a) 
    {
        Complex <>c(0,0); // no default contructor was available
        
        c._real = (this->_real * a);
        c._imaginary = (this->_imaginary * a);
        return c;
    }

    // overload '/' operator
    template <typename T1, typename T2>
    Complex<T1, T2> Complex<T1, T2>::operator / (Complex <T1, T2> a) 
    {
        Complex <T1, T2>c(0,0); // no default constructor was available
        
        c._real = ((this->_real * a._real) + (this->_imaginary * a._imaginary))/((a._real * a._real) + (a._imaginary * a._imaginary));
        c._imaginary = ((this->_imaginary * a._real) - (this->_real * a._imaginary))/((a._real * a._real) + (a._imaginary * a._imaginary));
        return c;
    }

    // conjugate function
    template <typename T1, typename T2>
    Complex<T1, T2> Complex<T1, T2>::operator - () 
    {
        Complex <>c(0,0); // no default constructor was available
        
        c._real = this->_real;
        c._imaginary = -(this->_imaginary);
        return c;
    }

}
