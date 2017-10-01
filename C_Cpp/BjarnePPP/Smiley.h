//
// Created by tjisana on 9/2/17.
//

#ifndef BJARNEPPP_SMILEY_H
#define BJARNEPPP_SMILEY_H


#include "Circle.h"
#include <vector>

class Smiley: public Circle {
public:
    Smiley(Point p,int r): Circle{p,r},mouth{nullptr}{}
    ~Smiley(){
        delete mouth;
        for(auto p: eyes) delete p;
    }
    void move(Point to);
    void draw() const{
        Circle::draw();
        for(auto p: eyes)
            p->draw();
        mouth->draw();
    }
    void rotate(int);
    void add_eye(Shape* s) { eyes.push_back(s); }
    void set_mouth(Shape* s);
    virtual void wink(int i);
private:
    std::vector<Shape*> eyes;
    Shape* mouth;
};


#endif //BJARNEPPP_SMILEY_H
