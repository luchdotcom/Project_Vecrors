//
// Created by Lachezar on 1.5.2020 г..
//

#include "Triangle.h"

Triangle::Triangle( const Point &point ) : Point( point ) { }

Triangle::Triangle( ) { }

Triangle::Triangle( double a, double b, double c ) : a(a),b(b),c(c) { }

std::ostream &operator<<( std::ostream &os, const Triangle &triangle ) {

    return triangle.ins(os);
}

Triangle &Triangle::operator=( const Triangle &point ) {
    if (this!=&point) {
        a = point.a;
        b = point.b;
        c = point.c;
    }
    return *this ;
}/*
bool Triangle::operator==( const Triangle &rhs ) const {
    return false;
}*/
bool Triangle::operator < (const Triangle & point) const {

}
bool Triangle::operator > ( const Triangle & ) const {

}
double Triangle::area(){
    return (a*b)/2;///???? check formula

}
double Triangle::perimetur(){
    return a+b+c;
}
Point Triangle::mediCenter(){
    return *this;
}

bool Triangle::operator==( const Triangle &rhs ) const {
    Point::operator==( rhs );


    return 0;////
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


