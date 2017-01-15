#include <iostream>
#include <cmath>

int countx(char*p,char x);

int main(int argc,char** argv){
    int tjage{31}; //new way to initialize variables   

    //const and constexpr
    const int jkage = tjage-7;

    //loops
    int cnt=1;    
    while(cnt<=1){
        std::cout<<"Y or n ";
        char response = 0 ;
        std::cin>>response;
        switch(response){
            case 'y':
            case 'n':
                std::cout<<"Valid response\n";return 0;
            default:
                std::cout<<"Retry\n";
        }
        ++cnt;
    }
    enum class Color{red=1,blue,green};
    Color c = Color::green;
    std::cout<<c;

    return 0;
}

int countx(char*p,char x){
    int cnt=0;
    //check that pointer is not null
    if(p==nullptr) return 0;

    for(;*p!=0;++p)
        if(*p==x)
            ++cnt;
    return cnt;
}