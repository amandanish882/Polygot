//
// Created by desktop on 3/26/17.
//

#ifndef FEDUFFY_NONLINEARSOLVER_H
#define FEDUFFY_NONLINEARSOLVER_H

#include <cmath>

class NonlinearSolver{
public:
    double (*pFunction)(double x);
    double tol;
    NonlinearSolver(){}
    NonlinearSolver(double (*f)(double x)){}
    virtual ~NonlinearSolver(){}
    virtual double solve()=0;
};

class SteffensensSolver:public NonlinearSolver{
private:
    double x0;
    double xPrevious,xCurrent;
    long n;
public:
    SteffensensSolver(double guess,double (*f) (double x)){
        x0 = xPrevious = guess;
        pFunction = f;
    }
    double solve(){
        for(;;) {
            double tmp;
            double hn;
            n = 1;
            xPrevious = x0;
            tmp = pFunction(xPrevious);
            hn = (pFunction(xPrevious + tmp) - tmp) / tmp;
            hn = tmp / hn;
            xCurrent = xPrevious - hn;
            xPrevious = xCurrent;
            n++;
            if (::fabs(hn) <= tol)
                return xCurrent;
        }
    }

};

#endif //FEDUFFY_NONLINEARSOLVER_H
