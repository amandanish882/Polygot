//
// Created by tjisana on 8/14/17.
//

#ifndef BJARNEPPP_RATIONAL_H
#define BJARNEPPP_RATIONAL_H


#include <cstdlib>

class Rational {
public:
    Rational(int numerator,int denominator);
    double toDouble() const;
    int getNumerator(){return numerator;}
    int getDenominator(){return denominator;}
private:
    int numerator;
    int denominator;

};

int gcd(int x, int y)
// greatest common denominator
// Euclid's algorithm (using remainder)
{
    x = abs(x);	// don't get confused by negative values
    y = abs(y);
    while (y) {
        int t = y;
        y = x%y;
        x = t;
    }
    return x;
}

Rational& operator=(Rational& rational,const Rational& rational1);
Rational operator+(const Rational& rational,const Rational& rational1);
Rational operator-(const Rational& rational,const Rational& rational1);


#endif //BJARNEPPP_RATIONAL_H
