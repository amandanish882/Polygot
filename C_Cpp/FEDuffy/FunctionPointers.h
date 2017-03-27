//
// Created by desktop on 3/25/17.
//

#ifndef FEDUFFY_FUNCTIONPOINTERS_H
#define FEDUFFY_FUNCTIONPOINTERS_H

#include <math.h>

double myFunc(double x){
    return x*x*x;
}

double myFunc2(double x){
    return log(x) / (1.0-x);
}

double midpointRuleValue(double (*f) (double x),double a, double b,int N){
    double res=0.0;
    double h = (b-a)/double(N);
    for (double x= a +(0.5 * h); x<b ; x+=h) {
        res+=f(x);
    }
    return res*h;
}

void genericFunction(double Mx, double My, double (*fp)(double x, double y)){
    std::cout<<fp(Mx,My);
}

double add(double x, double y){
    return x+y;
}
#endif //FEDUFFY_FUNCTIONPOINTERS_H
