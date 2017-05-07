#include <iostream>

class Date {
public:
    Date(int y,int m, int d):y{y},m{m},d{d}{

    }
    Date():y{default_date().y},m{default_date().m},d{default_date().d}{

    }
    const Date& default_date(){
        static Date dd {2001,8,1};
        return dd;
    }
private:
    int y;
    int m;
    int d;
};

int main(int argc,char** argv){
    Date date;
    Date date1;
    return 0;
}