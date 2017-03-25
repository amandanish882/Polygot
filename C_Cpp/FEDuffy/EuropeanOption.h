//
// Created by desktop on 3/25/17.
//

#ifndef FEDUFFY_EUROPEANOPTION_H
#define FEDUFFY_EUROPEANOPTION_H

#include <string>

class EuropeanOption {
private:
    double r;
    double sig;
    double K;
    double S0;
    double b;
    double T;
    std::string optType;
    double CallPrice() const;
    double PutPrice() const;
    double CallDelta() const;
    double PutDelta() const;
    double N(double x) const;
    double n(double x) const;

public:
    EuropeanOption();
    EuropeanOption(double r, double sig,double K, double S0, double b,double T,std::string optType);
    virtual ~EuropeanOption();
    EuropeanOption(const EuropeanOption& source);
    EuropeanOption& operator= (const EuropeanOption& source);
    double Price() const;
    double Delta() const;
    void toggle();
};


#endif //FEDUFFY_EUROPEANOPTION_H
