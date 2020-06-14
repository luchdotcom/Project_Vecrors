//
// Created by Lachezar on 1.5.2020 г..
//

#ifndef PROJECT_VECRORS_TRIANGLE_H
#define PROJECT_VECRORS_TRIANGLE_H


#include <ostream>
#include "Point.h"
#include <cmath>
#include <string>

class Triangle : public Point{
public:
    Triangle( );
    Triangle( const Point &,const Point&,const Point&);

    Triangle( double d, double d1, double d2 );
    Triangle &operator=( const Triangle &point ) ;

    bool operator ==( const Point &rhs ) const override;//todo
    bool operator < (const Triangle &) const ;//todo
    bool operator > ( const Triangle & ) const ;//todo

    std::ostream &ins( std::ostream &ostream ) const override;
    std::istream &ext( std::istream &istream ) override;

    double area() const;//ok
    double perimeter() const;///ok
    Point mediCenter() const;
    std::string kindOfTriangle()const ;

private:
    double a{},b{},c{};
};

 std::ostream &operator<<( std::ostream &os, const Triangle &triangle );

#endif //PROJECT_VECRORS_TRIANGLE_H
