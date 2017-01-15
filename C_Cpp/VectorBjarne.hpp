#ifndef VECTORBJARNE
#define VECTORBJARNE

class VectorBjarne{
    private:
        double* elem;
        int sz;
    public:
        //VectorBjarne(int s):elem{new double[s]},sz{s}{};
        VectorBjarne(int s);
        virtual ~VectorBjarne();
        double& operator[](int i){return elem[i];}
        int size() const {return sz;}

};

#endif