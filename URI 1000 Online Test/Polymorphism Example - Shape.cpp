#include<iostream>
using namespace std;
class shade
{
public:
    double dim1,dim2;
    shape ( double dim1, double dim2)
    {
        this ->dim1=dim1;
        this->dim2=dim2;
    }
    double area ()
    {
        return 0;
    }

};

class Triangle: public shade
{
public:
    Triangle (double dim1, double dim2)
    {

    }

    double area()
    {
        return .5*dim1*dim2;
    }

};


int main()
{




    return 0;
}

