

//
// Created by Lachezar on 29.4.2020 г..
//


#include "Vector.h"
Vector::Vector( ):x(0),y(0),z(0){}
Vector::Vector(double x,double y,double z ):x(x),y(y),z(z) {
}

Vector::Vector(const Point & a,const Point& b ){
}

Vector::~Vector( ) {
}
//изчисляване на дължина на вектор чрез 2 точки, която връща реалното число
double Vector::lengthVector(const Point& lhs,const Point& rhs){
    x=rhs.getX()-lhs.getX();
    y=rhs.getY()-lhs.getY();
    z=rhs.getZ()-lhs.getZ();
    double sum=sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    return sum;
}
//изчисляване на дължина на вектор чрез 3 реални стойности, която връща реалното число
double Vector::lengthVector(double x,double y ,double z ){
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}

//изчисляване на посока на вектор, която връща единичния вектор
Vector Vector::directionVector( double x1,double y1,double z1) {
    double x=x1/lengthVector(x1,y1,z1);
    double y=y1/lengthVector(x1,y1,z1);
    double z=z1/lengthVector(x1,y1,z1);

       if (lengthVector(x,y,z)==0) {
           throw VectorLengthException( "Vector length is  =0" );
       }
    return Vector(x,y,z);
}
std::ostream & Vector::ins(std::ostream &out)const {
   return out<<x<<y<<z;
}
 std::istream & Vector::ext(std::istream & in){
    double a,b,c;
    in>>a>>b>>c;
    return in;
}
//проверка за нулев вектор
bool Vector::nullVector( ) const {
    return x == y == z == 0;
}

bool Vector::paralelInVectors( ) const {
    return false;
}

std::ostream & operator<<(std::ostream & out,const Vector& rhs){
    return rhs.ins(out);
}
std::istream & operator>>(std::istream & in, Vector& rhs){
    return rhs.ext(in);
}
