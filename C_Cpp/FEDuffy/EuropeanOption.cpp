//
// Created by desktop on 3/25/17.
//

#include "EuropeanOption.h"
#include <math.h>

EuropeanOption::EuropeanOption()
                : r(0.8),sig(0.30),K(65.0),T(0.25),S0(60.0),b(r),optType("C")
{}

EuropeanOption::~EuropeanOption() {}

EuropeanOption::EuropeanOption(double r, double sig, double K, double S0, double b,double T, std::string optType)
                            : r(r),sig(sig),K(K),S0(S0),b(b),T(T),optType(optType)
{}

EuropeanOption::EuropeanOption(const EuropeanOption& source)
                :r(source.r),sig(source.sig),K(source.K),S0(source.S0),b(source.b),T(source.T),optType(source.optType)
{}

EuropeanOption& EuropeanOption::operator=(const EuropeanOption &source) {
    if(this==&source) return *this;
    r = source.r;
    sig = source.sig;
    K = source.K;
    S0 = source.S0;
    b = source.b;
    T = source.T;
    optType = source.optType;
    return *this;
}

double EuropeanOption::n(double x) const
{

    double A = 1.0/sqrt(2.0 * M_PI);
    return A * exp(-x*x*0.5);

}

double EuropeanOption::N(double x) const
{ // The approximation to the cumulative normal distribution


    double a1 = 0.4361836;
    double a2 = -0.1201676;
    double a3 = 0.9372980;

    double k = 1.0/(1.0 + (0.33267 * x));

    if (x >= 0.0)
    {
        return 1.0 - n(x)* (a1*k + (a2*k*k) + (a3*k*k*k));
    }
    else
    {
        return 1.0 - N(-x);
    }

}

double EuropeanOption::PutPrice() const {
    double tmp = sig * sqrt(T);
    double d1 = ( log(S0/K) + (b+ (sig* sig)* 0.5 ) * T )/ tmp;
    double d2 = d1 - tmp;
    double temporary = (K * exp(-r * T)* N(-d2)) - (S0 * exp((b-r)* T) * N(-d1));
    return (K * exp(-r * T)* N(-d2)) - (S0 * exp((b-r)* T) * N(-d1));
}

double EuropeanOption::CallPrice() const {
    double tmp = sig * sqrt(T);
    double d1 = ( log(S0/K) + (b+ (sig* sig)* 0.5 ) * T )/ tmp;
    double d2 = d1 - tmp;
    return (S0 * exp((b-r)* T) * N(d1)) - (K * exp(-r * T)* N(d2));
}

double EuropeanOption::CallDelta() const
{
    double tmp = sig * sqrt(T);
    double d1 = ( log(S0/K) + (b+ (sig* sig)* 0.5 ) * T )/ tmp;
    return exp((b-r)* T) * N(d1);
}

double EuropeanOption::PutDelta() const
{
    double tmp = sig * sqrt(T);
    double d1 = ( log(S0/K) + (b+ (sig* sig)* 0.5 ) * T )/ tmp;
    return exp((b-r)* T) * (N(d1) - 1.0);
}

void EuropeanOption::toggle() {
    if(optType=="C")
        optType="P";
    else
        optType="C";
}

double EuropeanOption::Price() const {
    return optType=="C" ? CallPrice():PutPrice();
}

double EuropeanOption::Delta() const {
    return optType=="C" ? CallDelta():PutDelta();
}
