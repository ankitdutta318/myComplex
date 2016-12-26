//class declaration/blueprint
// .hpp is C++ header files

#ifndef _COMPLEX_   // to avoid multiple inclusion
#define _COMPLEX_


// we are going to keep everything separate inside our own namespace

namespace Ankit {
  // Declaring default parameter types, both as int
  template <typename T1 = double, typename T2 = double>
  class Complex 
  {
  private:
    T1 _real;
    T2 _imaginary;
   
  public: 
    // Constructor that initializes member variables
    Complex (const T1& real, const T2& img): _real(real), _imaginary(img) {} // using initializer list
   
    // Accessor functions
    const T1 GetRealPart () const { return _real; }
    const T2 GetImaginaryPart () const { return _imaginary; }

    // display function
    static void show(const Complex <> c ) 
    {
        if(c._imaginary < 0)
            cout << c._real << c._imaginary << "i" << endl;
        else
            cout << c._real << " + " << c._imaginary << "i" << endl;
    }
    
    // overloaded '+' operators
    Complex<T1, T2> operator + (Complex <T1, T2> a);
    
   // overloaded '-' operator
   Complex<T1, T2> operator - (Complex <T1, T2> a);
    
   // overloaded '*' operator for complex multiplication
   Complex<T1, T2> operator * (Complex <T1, T2> a); 

   // overloaded '*' operator for scalar multiplication
   Complex<T1, T2> operator * (int a);

   // overloaded '/' operator
   Complex<T1, T2> operator / (Complex <T1, T2> a);
   
   // conjugate function
   Complex<T1, T2> operator - ();
  };

}


#endif