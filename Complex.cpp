//
//  Complex.cpp
//  Complex
//
//  Created by Кирилл Зинкин on 14.05.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Complex.hpp"

Complex::Complex()
{
    Re = 0;
    Im = 0;
}

Complex::Complex(double x, double y)
{
    Re = x;
    Im = y;
}

Complex::Complex(Complex& A)
{
    Re = A.Re;
    Im = A.Im;
}

void Complex::set(double x, double y)
{
    Re = x;
    Im = y;
}

Complex Complex::get() const
{
    Complex z(Re, Im);
    return z;
}

double Complex::getRe() const
{
    return Re;
}

double Complex::getIm() const
{
    return Im;
}

Complex operator + (Complex& x, Complex& y)
{
    Complex z;
    z.Re = x.Re + y.Re;
    z.Im = x.Im + y.Im;
    return z;
}

Complex operator * (Complex& x, Complex& y)
{
    Complex z;
    z.Re = x.Re * y.Re - x.Im * y.Im;
    z.Im = x.Re * y.Im + y.Re * x.Im;
    return z;
}

Complex operator - (Complex& x, Complex& y)
{
    Complex z;
    z.Re = x.Re - y.Re;
    z.Im = x.Im - y.Im;
    return z;
}

Complex operator / (Complex& x, Complex& y)
{
    Complex z;
    z.Re = (x.Re * y.Re + x.Im * y.Im) / (y.Re * y.Re + y.Im * y.Im);
    z.Im = (y.Re * x.Im - x.Re * y.Im) / (y.Re * y.Re + y.Im * y.Im);
    return z;
}

Complex& Complex:: operator =(const Complex& x)
{
    if (&x == this)
        return *this;
    Re = x.Re;
    Im = x.Im;
    return *this;
}

bool operator == (Complex& x, Complex& y)
{
    return ((x.Re == y.Re) && (x.Im == y.Im));
}

double abs(Complex z)
{
    double abs;
    abs = sqrt(pow(z.Re, 2) + pow(z.Im, 2));
    return abs;
}
Complex operator ^ (Complex z, double a)
{
    double f, r;
    f = atan2(z.Im, z.Re);
    r = sqrt(pow(z.Re, 2) + pow(z.Im, 2));
    r = pow(r,a);
    f = a * f;
    z.Re = r * cos(f);
    z.Im = r * sin(f);
    
    return z;
}

ostream& operator << (ostream& out, const Complex& y)
{
    out << y.Re;
    out << y.Im;
    return out;
}

istream& operator >> (istream& in, Complex& y)
{
    in >> y.Re;
    in >> y.Im;
    return in;
}
