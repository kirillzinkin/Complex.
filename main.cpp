//
//  main.cpp
//  Complex
//
//  Created by Кирилл Зинкин on 14.05.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Complex.hpp"
#include <iostream>

using namespace std;


int main() {
    Complex x;
    Complex y(3, 1);
    Complex z(y);
    cout << x << " " << y << " " << z << " Constructors" << endl;
    z.set(7, 9);
    z.get();
    cout << z.get() << " set&&get " << endl;
    Complex d;
    double a;
    d = x + y;
    cout << d << " operator + " << endl;
    d = d - y;
    cout << d << " operator - " << endl;
    d = z * y;
    cout << d << " operator * " << endl;
    d = z / y;
    cout << " operator / " << d << endl;
    d = y;
    cout << d << " operator = " << endl;
    cout << (d == y) << " operator == " << endl;
    cout << (x == y) << " operator == " << endl;
    a = abs(z);
    cout << a << " modul " << endl;
    a = 5;
    d = z^a;
    cout << d << " operator ^ natur(+) " << endl;
    a = -3;
    d = z^a;
    cout << d << " operator ^ natur(-) " << endl;
    a = 2.3;
    d = z^a;
    cout << d << " operator ^ drob " << endl;


    Complex r;
    cin >> r;
    cout << r << " operator cin>> " << endl;
    
    return 0;
}
