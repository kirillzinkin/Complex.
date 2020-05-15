//
//  Complex.hpp
//  Complex
//
//  Created by Кирилл Зинкин on 14.05.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include<iostream>
#include<cmath>

using namespace std;
class Complex
{
public:
    Complex();
    Complex(double x, double y);
    Complex(Complex& A);
    void set(double x, double y);
    Complex get() const;
    double getRe() const;
    double getIm() const;
    
    friend Complex operator + (Complex& x, Complex& y);
    friend Complex operator * (Complex& x, Complex& y);
    friend Complex operator - (Complex& x, Complex& y);
    friend Complex operator / (Complex& x, Complex& y);
    Complex& operator = (const Complex& x);
    friend bool operator == (Complex& x, Complex& y);
    friend double abs(Complex z);
    friend Complex operator ^ (Complex z, double a);
    friend ostream& operator << (ostream& out, const Complex& y);
    friend istream& operator >> (istream& in, Complex& y);

private:
    double Re;
    double Im;
};

#endif /* Complex_hpp */
