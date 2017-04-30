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
        return 0;
    }
    catch(BadArea badArea){
        badArea.tellUser();
        return 1;
    }
    catch(std::runtime_error& e){
        std::cerr<<e.what();
        return 2;
    }

}

double area(double l, double w){
    if(l < 0 ) throw BadArea(l);
    if(w < 0 ) throw BadArea(l);
    return l*w;
}