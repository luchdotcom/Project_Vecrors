//
// Created by Lachezar on 28.5.2020 г..
//

#include "Line.h"
Line::Line( ) :x(0),y(0),z(0),t(0){}
Line::Line(int l ) {}
Line::Line(const Line&rhs):x(rhs.x),y(rhs.y),z(rhs.z){
}

Line &Line::operator=( const Line & rhs) {
    Vector::operator=(rhs);
    if (this!= &rhs){
        x=rhs.x;
        y=rhs.y;
        z=rhs.z;
    }

    return *this;
}

Line::~Line( ) = default;
Line::Line(double x,double y ,double z):x(x),y(y),z(z){}
Line::Line( Vector & lhs, Point &rhs, int t):Vector(lhs),Point(rhs),t(t) {
    x=lhs.getX()*t+x;
    y=lhs.getY()*t+y;
    z=lhs.getZ()*t+z;
}

Line::Line( Point &lhs, Point & rhs, int t):Point(lhs),t(t){
    this->x=rhs.getX()-lhs.getX();
    this->y=rhs.getY()-lhs.getY();
    this->z=rhs.getZ()-lhs.getZ();
    Line(lhs.getX()+x*t,lhs.getY()+y*t,lhs.getZ()+z*t);

}

Vector Line::directionLine( )  {
    Vector v(getY(),getY(),getZ());
  return v.directionVector();
}

Vector Line::normalVector( const Line& rhs) {
    x=x / rhs.x;
   y =  y /rhs.y;
   z= z / rhs.z;
    return Vector(x,y,z);
}

double Line::angelBetweenTwoLines(const Line & rhs ) const {
double result =acos( (x*rhs.x+y*rhs.y+z*rhs.z)/(sqrt(pow(x,2)+pow(y,2)+pow(z,2)*(sqrt(pow(rhs.x,2)+pow(rhs.y,2)+pow(rhs.z,2))))));
    return result;
}

bool Line::operator+( const Point & rhs) const {

    return (rhs.getX()-x==rhs.getY()-y && rhs.getY()-y == rhs.getZ()-z)==0;
}

bool Line::operator||( const Line &rhs ) const {
    return (x/rhs.x== y/rhs.y&&y/rhs.y!=z/rhs.z);
}

bool Line::operator==( const Line & rhs) const {
    return (x/rhs.x== y/rhs.y&&y/rhs.y==z/rhs.z);
}

bool Line::operator&&( const Line & rhs ) const {
    return (x/rhs.x== y/rhs.y&&y/rhs.y==z/rhs.z);
}

bool Line::operator!=( const Line & rhs) {
    return !parallelInVectors(rhs);
}

bool Line::operator|( const Line & rhs) const {
    return perpendicular(rhs);
}

std::ostream &Line::ins( std::ostream &out)const {
    return  out<<x<<","<<y<<" ,"<<z;
}
std::istream &Line::ext( std::istream & in) {
    return  in>>x>>y>>z;
}
std::ostream & operator<<(std::ostream &out,const Line& rhs){
    return rhs.ins(out);

}
std::istream & operator>>(std::istream &in  , Line& rhs){
    return rhs.ext(in);
}

