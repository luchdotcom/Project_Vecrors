

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
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
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
//TODO
bool Vector::parallelInVectors( const Vector&rhs) const {

    return x / rhs.x == y / rhs.y == z / rhs.z;
}
//• проверка за перпендикулярност на текущия вектор
bool Vector::perpendicular(const Vector& rhs)const {
    if (lengthVector(x,y,z)==0||lengthVector(rhs.x,rhs.y,rhs.z)==0){
        throw VectorLengthException(" ones on vectoir is =0");
    }
    return (x*rhs.x+y*rhs.y+z*rhs.z==0);
}
Vector::Vector (const Vector& rhs):x(rhs.x),y(rhs.y),z(rhs.z){
}
Vector& Vector::operator=(const Vector& rhs){
    if (this!=&rhs){
        delete this;
    }
    x=rhs.x;
    y=rhs.y;
    z=rhs.z;
    return *this;
}
//събиране на два вектора, чрез операция +, като резултат се получава отново вектор:
Vector Vector::operator+(Vector&rhs){
    this->x=x+rhs.x;
    this->y=y+rhs.y;
    this->z=z+rhs.z;
    return *this;
}
// изваждане на два вектора, чрез операция −, като резултат се получава отново вектор:
Vector Vector::operator-(Vector& rhs){
    this->x=x-rhs.x;
    this->y=y-rhs.y;
    this->z=z-rhs.z;
    return *this;
}
//скаларно произведение на два вектора, чрез операция *, като резултат се получава
//реално число:
double Vector::operator*(Vector&rhs) const{
   return ((x*rhs.x)+(y*rhs.y)+(z*rhs.z));
}
Vector::operator double () const {
    return 0;
}
Vector Vector::operator*(double realDigit){
    x=x*realDigit;
    y=y*realDigit;
    z=z*realDigit;
    return Vector(x ,y ,z);
}
//векторно произведение на два вектора, чрез операция ^ като резултатът е вектор.
Vector Vector::operator^(const Vector& rhs) const{
    return Vector((y*rhs.z)-(z*rhs.y),((x*rhs.z)-(z*rhs.x)),(x*rhs.y)-(y*rhs.x));

}
double Vector::operator()(const Vector&v1, const Vector& v2){

}
std::ostream & operator<<(std::ostream & out,const Vector& rhs){
    return rhs.ins(out);
}
std::istream & operator>>(std::istream & in, Vector& rhs){
    return rhs.ext(in);
}/*
Vector operator^(Vector&lhs,Vector& rhs) {
    return Vector((lhs.y*rhs.z)-(lhs.z*rhs.y),(-lhs.x*rhs.z)+(lhs.z*rhs.x),(lhs.x*rhs.y)-(lhs.y*rhs.x));
}*/