#ifndef POINTHPP
#define POINTHPP

#include <string>

class Point{
    private:
        double m_x;
        double m_y;
    public:
        Point();
        Point(double x,double y);
        Point(const Point& point);
        virtual ~Point();
        double X() const {return m_x;}
        double Y() const {return m_y;}
        void X(double x);
        void Y(double y);
        std::string ToString() const;

    //functions
    double Distance() const;
    double Distance(const Point& p) const;
};

#endif