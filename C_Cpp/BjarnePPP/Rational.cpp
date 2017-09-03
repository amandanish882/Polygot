//
// Created by tjisana on 8/14/17.
//

#include "Rational.h"

Rational::Rational(int numerator, int denominator):numerator{numerator},denominator{denominator} {
}

double Rational::toDouble() const {
    return double(numerator)/denominator;
}

Rational Rational::operator+(const Rational &rational1, const Rational &rational2) const{
    return Rational(rational1.numerator*rational2.denominator + rational1.denominator*rational2.numerator,rational1.denominator*rational2.denominator);
}
