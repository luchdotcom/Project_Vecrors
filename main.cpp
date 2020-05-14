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
    Vector v1(3,5,4);
    p0 = p;
    cout<<p0<<"\n";
    cout<<v.lengthVector(p,p1)<<"\n";
    cout<<"single "<<v.directionVector(6,4,-1)<<"\n";
    cout << "v1"<<v1<<"\n";
    Triangle triangle(5,4,8);
    cout<<"triangele is a "<<triangle.kindOfTriangle()<< "\n aria is= "<<triangle.area()<<"\n perimeter is= "<<
            triangle.perimetur();


    return  0;
}
