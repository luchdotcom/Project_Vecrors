//
// Created by Lachezar on 29.4.2020 г..
//

#ifndef PROJECT_VECRORS_VECTOR_H
#define PROJECT_VECRORS_VECTOR_H

#include <iostream>
#include "Element.h"
#include "Point.h"
#include <cmath>
#include "VectorLengthException.h"

class Vector: virtual public Point{
public:
    Vector();
    Vector(double ,double,double );
    Vector(const Point&,const Point&);


    virtual ~Vector( );
    double lengthVector(const Point&,const Point&);
    static Vector directionVector(double ,double ,double );
    static double lengthVector(double ,double ,double ) ;
    bool nullVector()const ;
    bool parallelInVectors(const Vector&)const ; //todo

     bool perpendicular(const Vector&)const ;
     Vector (const Vector&);
     Vector& operator=(const Vector&);

     Vector operator+(Vector&);//todo make separate
     Vector operator-(Vector&);//todo make separate
     double operator*(Vector&) const;//todo провери си формулата
     explicit operator double () const ;//todo
     Vector operator*(double );//todo make separate
     Vector operator^(const Vector&) const;//todo make separate
     double operator()(const Vector&, const Vector&);//todo



    virtual std::ostream & ins(std::ostream &)const ;
    virtual std::istream & ext(std::istream &);
private:
    double x,y,z;
};
std::ostream & operator<<(std::ostream &,const Vector&);
std::istream & operator>>(std::istream &, Vector&);
//Vector operator^(Vector&,Vector& );

#endif //PROJECT_VECRORS_VECTOR_H
