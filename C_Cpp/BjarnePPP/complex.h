//
// Created by tjisana on 8/28/17.
//

#ifndef BJARNEPPP_COMPLEX_H
#define BJARNEPPP_COMPLEX_H


class complex {
    double re,im;
public:
    complex():re{0.0},im{0.0}{}
    complex(double re,double im):re{re},im{im}{}
    double real() const{return re;}
    void real(double re){this->re=re;}
    double imag()const {return im;}
    void imag(double im){this->im=im;}
    complex& operator+=(const complex& source){re+=source.re;im+=source.im; return *this;}

};


#endif //BJARNEPPP_COMPLEX_H
