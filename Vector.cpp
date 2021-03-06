

//
// Created by Lachezar on 29.4.2020 г..
//


#include "Vector.h"
Vector::Vector( ):x(0),y(0),z(0){}
Vector::Vector(double x,double y,double z ):x(x),y(y),z(z) {
}

Vector::Vector(const Point & a,const Point& b ):Point(a){
    x=b.getX()-a.getX();
    y=b.getY()-a.getY();
    z=b.getZ()-a.getZ();
}

Vector::~Vector( ) = default;
//изчисляване на дължина на вектор чрез 2 точки, която връща реалното число
double Vector::lengthVector(const Point& lhs,const Point& rhs){
    x=rhs.getX()-lhs.getX();
    y=rhs.getY()-lhs.getY();
    z=rhs.getZ()-lhs.getZ();
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}
//изчисляване на дължина на вектор чрез 3 реални стойности, която връща реалното число
double Vector::lengthVector( ) const{
    return sqrt((pow(x,2)) + ((pow(y,2) ))+ (pow(z,2)));
}

//изчисляване на посока на вектор, която връща единичния вектор
Vector Vector::directionVector( ) const {
        if (lengthVector()==0) {
            throw VectorLengthException( "Vector length is  =0" );
        }
    return Vector(x/lengthVector(),y/lengthVector(),z/lengthVector());
}
std::ostream & Vector::ins(std::ostream &out)const {
   return out<<x<<","<<y<<","<<z;
}
 std::istream & Vector::ext(std::istream & in){
    double a,b,c;
    in>>a>>b>>c;
    return in;
}
//проверка за нулев вектор
bool Vector::nullVector( ) const {
    bool f= ( x == y && y == z ) != 0;                          // проверка за нулев вектор и връща true илиfalse
    return f;
}

bool Vector::parallelInVectors( const Vector&rhs) const {
    if ( this->nullVector()||rhs.nullVector()){                  // прихваща изключение ако е нулев вектора
        throw VectorLengthException("have a null vector");       //изхвърля изключения от тип Vector Length Exceptions
    }
    return x / rhs.x == y /rhs.y&& y/rhs.y == z / rhs.z;        // връща true или false
}
//• проверка за перпендикулярност на текущия вектор
bool Vector::perpendicular(const Vector& rhs)const {
    if (lengthVector()==0||rhs.lengthVector()==0){
        throw VectorLengthException(" ones on vector is =0");
    }
    return (x*rhs.x+y*rhs.y+z*rhs.z==0);
}
Vector::Vector (const Vector& rhs):x(rhs.x),y(rhs.y),z(rhs.z){
}
Vector& Vector::operator=(const Vector& rhs){
    Point::operator=(rhs);
    if (this!=&rhs){
        x=rhs.x;
        y=rhs.y;
        z=rhs.z;
    }
    return *this;
}
//събиране на два вектора, чрез операция +, като резултат се получава отново вектор:
Vector Vector::operator+(Vector&rhs){
    x=x+rhs.x;
    y=y+rhs.y;
    z=z+rhs.z;
    return Vector(x,y,z);
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
    double res=((x*rhs.x)+(y*rhs.y)+(z*rhs.z));
   return res;
}
Vector::operator double () const {
    return x;
}
Vector Vector::operator*(double realDigit){
    x=x*realDigit;
    y=y*realDigit;
    z=z*realDigit;
    return Vector(x ,y ,z);
}
//векторно произведение на два вектора, чрез операция ^ като резултатът е вектор.
Vector Vector::operator^(const Vector& rhs) const {
    return Vector(( y * rhs.z ) - ( z * rhs.y ), -( x * rhs.z ) + ( z * rhs.x ), ( x * rhs.y ) - ( y * rhs.x ));
}
//смесено произведение на три вектора, чрез операция ()
double Vector::operator()(const Vector& b, const Vector& c) const{
   return  ( this->x*b.y*c.z)+( this->y*b.z*c.x)+( this->z*b.x*b.z)-( this->z*b.y*c.x)-(c.y*b.z* this->x)-(c.z*b.x* this->y);

   //return ((x*(u.y*v.z)-(u.z*v.y)*x)+(y*(u.x*v.z)-(u.z*v.x))-((u.x*v.y)-(u.y*v.x)));

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