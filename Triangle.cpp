//
// Created by Lachezar on 1.5.2020 г..
//

#include "Triangle.h"

Triangle::Triangle( const Point &point1,const Point & point2,const Point & point3 ) : Point(point1 ) {
    a=point1.getX();
    b=point2.getY();
    c=point3.getZ();
}

Triangle::Triangle( ):a(0),b(0),c(0) { }

Triangle::Triangle( double a, double b, double c ) : a(a),b(b),c(c) { }

std::ostream &operator<<( std::ostream &os, const Triangle &triangle ) {
    return triangle.ins(os);
}

Triangle &Triangle::operator=( const Triangle &point ) {
    if (this!=&point) {
        Point::operator=(point);
        a = point.a;
        b = point.b;
        c = point.c;
    }
    return *this ;
}
bool Triangle::operator < ( const Point & point) {


}
bool Triangle::operator > ( const Point & point) const {

}
double Triangle::area() const{
    return sqrt(perimeter()*((perimeter()- this->a)*(perimeter()-this->b)*(perimeter()-this->c)));

}
double Triangle::perimeter() const{
    return getX()+getY()+getZ()/2;
}
Point Triangle::mediCenter() const{
    //намиране на медианите на триъгълника
    double Ma,Mb,Mc;
    Ma=sqrt((2*c*c)+(2*b*b)-a*a)/2;
    Mb=sqrt((2*c*c)+(2*a*a)-b*b)/2;
    Mc=(sqrt((2*a*a)+(2*b*b)-c*c))/2;

    return Point(Ma,Mb,Mc);
}

bool Triangle::operator==( const Point &rhs ) const {


    return false;////
}

std::ostream &Triangle::ins( std::ostream &out ) const {
    return Point::ins( out );
}

std::istream &Triangle::ext( std::istream &in) {
    return Point::ext( in);
}
//определяне на вида на триъгълника

std::string Triangle::kindOfTriangle( ) const{
    std::string kind;
    double p;
    p=a*a+b*b;
    if (a==b||b==c){
        kind="equilateral triangle";
    } else if (std::abs(a - b) < 1.0e-4 && std::abs (a- c) < 1.0e-14 && std::abs(b - c) < 1.0e-14 ){
        kind="isosceles triangle";
    }
    else if (c*c>=p){
        kind="acute-angled triangle";
    }
    else if  (std::abs( a*a + b*b - c*c) <1.0e-14 && std::abs(a*a + c*c - b*b) < 1.0e-14 && std::abs(b*b + c*c - a*a) < 1.0e-14 ){
        kind="rectangular triangle";
    }
    else if (c>=a+b){
        kind="obtuse-angle triangle";
    }
    return kind;
}


