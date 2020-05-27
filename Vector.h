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

class Vector: public Point{
public:
    Vector();
    Vector(double ,double,double );
    Vector(const Point&,const Point&);

    virtual ~Vector( );
    double lengthVector(const Point&,const Point&);
    Vector directionVector(double ,double ,double );
    static double lengthVector(double ,double ,double ) ;
    bool nullVector()const ;
    bool parallelInVectors(const Vector&)const ; //todo

     bool perpendicular(const Vector&)const ;
     Vector operator+(Vector&);//todo
     Vector operator-(Vector&);//todo
     double operator*(Vector&);//todo
     Vector operator*(int);//todo
     Vector operator^(Vector&);//todo
     double operator()(Vector&, Vector&);//todo



    virtual std::ostream & ins(std::ostream &)const ;
    virtual std::istream & ext(std::istream &);
private:
    double x,y,z;
};
std::ostream & operator<<(std::ostream &,const Vector&);
std::istream & operator>>(std::istream &, Vector&);

#endif //PROJECT_VECRORS_VECTOR_H
