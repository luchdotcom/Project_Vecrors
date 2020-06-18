//
// Created by Lachezar on 29.4.2020 г..
//

#include "Point.h"
Point::Point( ):x(0),y(0),z(0) { }
Point::Point( double x, double y, double z):x(x),y(y),z(z) {
}
Point::Point( const Point & rhs) : Element(rhs) {
    x=rhs.x;
    y=rhs.y;
    z=rhs.z;

}

Point::~Point( ) {
}

double Point::getX( ) const {
    return x;
}

double Point::getY( ) const {
    return y;
}

bool Point::operator==( const Point &rhs ) const {
    return (x == rhs.x && z == rhs.z && y== rhs.y);
}

double Point::getZ( ) const {
    return z;
}

void Point::setX( double x ) {
    Point::x = x;
}

void Point::setY( double y ) {
    Point::y = y;
}

void Point::setZ( double z ) {
    Point::z = z;
}

std::istream & Point::ext( std::istream & in) {
    return in;
}

std::ostream &Point::ins( std::ostream & out) const {
    return out<<x<<" "<<y<<" "<<z;
}

Point &Point::operator=( const Point & rhs) {
    if (this!=&rhs){
        Element::operator=(rhs);
        x=rhs.x;
        y=rhs.y;
        z=rhs.z;
    }
    return *this;
}

std::ostream & operator<<(std::ostream & out,const Point& rhs){
    return rhs.ins(out);
}
std::istream & operator>>(std::istream &in, Point& rhs){
    return rhs.ext(in);
}





