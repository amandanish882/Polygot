#include <iostream>
#include <cmath>

int main(int argc,char** argv){
    double a=0.0;
    double b=0.0;
    double c=0.0;
    double root1=0.0;
    double root2=0.0;
    try{
        std::cin>>a>>b>>c;
        double temp = sqrt((b*b)-(4*a*c))/ (2*a);
        root1 = -b + temp;
        root2 = -b - temp;
        std::cout<<"Root 1 "<<root1<<" Root 2 "<<root2<<std::endl;
        return 0;
    }
    catch(std::runtime_error& e){
        std::cerr<<e.what();
        return -1;
    }
}