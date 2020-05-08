

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
double Vector::lengthVector(const Point& lhs,const Point& rhs){
    this->x=rhs.getX()-lhs.getX();
    y=rhs.getY()-lhs.getY();
    z=rhs.getZ()-lhs.getZ();
    double sum=sqrt((x*x) + (y*y)+(z*z));
    return sum;
}
double Vector::lengthVector(double x,double y ,double z ){
    double sum=sqrt((x*x) + (y*y)+(z*z));
    this->x=x/sum;
    this->y=y/sum;
    this->z=z/sum;
    return sum;//???
}


int Vector::singleVector( double x,double y,double z) {
    double len=lengthVector(x,y,z);
    int single=(int ) sqrt((x/len)+(y/len)-(z/len));
    try {
       if (single<1)
       throw VectorLengthException("single vector is not be =0",1);
    }
    catch (VectorLengthException & exe) {
        std::cerr<< typeid(exe).name();
    }


    return single;
}
std::ostream & Vector::ins(std::ostream &out)const {
   return out<<x<<y<<z;


}
 std::istream & Vector::ext(std::istream & in){
    double a,b,c;
    in>>a>>b>>c;
    return in;
}

std::ostream & operator<<(std::ostream & out,const Vector& rhs){
    return rhs.ins(out);
}
std::istream & operator>>(std::istream & in, Vector& rhs){
    return rhs.ext(in);
}
