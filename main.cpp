#include <iostream>
#include "Element.h"
#include "Point.h"
#include "Vector.h"
#include "Triangle.h"

using namespace std;

int main( ) {
    Point p0;
    Point p(1,-1,2);
    Point p1(2,-3,0);
    cout<<p0<<"\n";
    Vector v(p,p1);
    Vector v1(1,-1,2);
    Vector v2(0,7,-2);
    Vector v3(2,-3,0);
    p0 = p;
    cout<<p0<<"\n";
    cout<<" length by 2 points= "<<v.lengthVector(p,p1)<<"\n";
    cout<<"length by 3 values= "<<v.lengthVector(3,5,8)<<"\n";
    try {
        cout<<"single= "<<v.directionVector(3,5,0)<<"\n";
    } catch (double & ex) {
        cerr<<ex;

    }

    cout << "v1= "<<v1<<"\n";
    cout<<boolalpha<<v1.nullVector()<<endl;
    cout<<" paralel   "<< boolalpha<<v1.parallelInVectors(Vector(1,-6,3))<<endl;
    cout<<"sum 2 Vectors is = "<<v1+v2<<endl;
    cout<<"multiply 2 Vectors  = "<<v1*v2<<endl;
    cout<<"multiply  Vectors whit real digit  = "<<v2*3.<<endl;
    //cout<<"multiply  real digit whit Vectors  = "<<4*v2<<endl;

    Vector res=v1 ^ v2;
    cout<<"multiply  Vectors whit 2 vector  = "<<res<<endl;

    cout<<"null vector  = "<<v1.nullVector()<<endl;

    cout<<"mixed work  whit 3 vector  = "<<v1(v2,v3)<<endl;



    return  0;
}
