//
// Created by Lachezar on 28.5.2020 г..
//

#ifndef PROJECT_VECRORS_LINE_H
#define PROJECT_VECRORS_LINE_H


#include "Vector.h"
#include "Point.h"

class Line : virtual public Point,virtual public Vector{
public:
    Line();
    Line(const Line&);
    Line & operator=(const Line&);
   virtual ~Line();
    Line(Vector&,Point&);//todo
    Line(Point&,Point&);//todo
    Vector directionLine();//todo
    Vector normalVector();//todo
    double angelBetweenTwoLines();//todo

    bool operator+(const Line&);//todo
    bool operator||(const Line&);//todo
    bool operator==(const Line&);//todo
    bool operator&&(const Line&);//todo
    bool operator!=(const Line&);//todo
    bool operator|(const Line&);//todo

};


#endif //PROJECT_VECRORS_LINE_H
