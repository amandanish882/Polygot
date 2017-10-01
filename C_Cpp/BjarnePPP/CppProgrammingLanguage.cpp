template<class T>
class vector {
    T* elem;
// ...
public:
    T& operator[](int i) { return elem[i]; }
// return reference to element
    const T& operator[](int i) const { return elem[i]; } // return reference to const element

};

void f(const vector<double>& v)
{
    double d1 = v[1];
// copy the value of the double referred to by v.operator[](1) into d1
    v[2] = 7;
// place 7 in the double referred to by the result of v.operator[](2)

// give push_back() a reference to d1 to wor k with
}

int main(int argc, char** argv) {
    
    return 0;
}