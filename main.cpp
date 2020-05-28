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
    Vector v1(3,4,2);
    Vector v2(0,2,6);
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
    cout<<v1.nullVector()<<endl;
    cout<<" paralel   "<< v1.parallelInVectors(Vector(1,-6,3));
    cout<<"sum 2 Vectors is = "<<v1+v2<<endl;


    return  0;
}
