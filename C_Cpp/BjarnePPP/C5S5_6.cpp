#include <iostream>
using std::cout;
using std::endl;

class BadArea{
private:
    double response;
public:
    BadArea(double response):response(response){}
    virtual ~BadArea(){}
    void tellUser(){
        cout<<"Response "<<response<<endl;
    }
};

double area(double l, double w);

int main(int argc, char** argv){
    try {
        area(-1,2);
    }
    catch(BadArea badArea){
        badArea.tellUser();
    }

    return 0;
}

double area(double l, double w){
    if(l < 0 ) throw BadArea(l);
    if(w < 0 ) throw BadArea(l);
    return l*w;
}