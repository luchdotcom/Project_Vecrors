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


    ~Vector( ) override;
    double lengthVector(const Point&,const Point&);
    Vector directionVector(double ,double ,double );
    static double lengthVector(double ,double ,double ) ;
    bool nullVector()const ;
    bool parallelInVectors(const Vector&)const ;

     bool perpendicular(const Vector&)const ;
     Vector (const Vector&);
      Vector& operator=(const Vector&);

     Vector operator+(Vector&);
     Vector operator-(Vector&);
     double operator*(Vector&) const;
     explicit operator double () const ;
     Vector operator*(double );
     Vector operator^(const Vector&) const;
     double operator()(const Vector&, const Vector&);



    std::ostream & ins(std::ostream &)const override ;
    std::istream & ext(std::istream &) override ;
private:
    double x,y,z;
};

//Vector operator^(Vector&,Vector& );

#endif //PROJECT_VECRORS_VECTOR_H
