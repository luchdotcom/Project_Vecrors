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
    int sumVector(const Point&,const Point&);//???
    bool nullVector()const ;
    bool parallelInVectors(const Vector&)const ;

     bool perpendicular(const Vector&)const ;



    virtual std::ostream & ins(std::ostream &)const ;
    virtual std::istream & ext(std::istream &);
private:
    double x,y,z;
};
std::ostream & operator<<(std::ostream &,const Vector&);
std::istream & operator>>(std::istream &, Vector&);

#endif //PROJECT_VECRORS_VECTOR_H
