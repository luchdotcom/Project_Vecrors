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
    Triangle( const Point &);
    Triangle( double d, double d1, double d2 );
    Triangle &operator=( const Triangle &point ) ;

    virtual bool operator ==( const Triangle &rhs ) const;
    bool operator < (const Triangle &) const ;
    bool operator > ( const Triangle & ) const ;

    std::ostream &ins( std::ostream &ostream ) const override;
    std::istream &ext( std::istream &istream ) override;

    double area();//ok
    double perimetur();///ok
    Point mediCenter();
    std::string kindOfTriangle();

private:
    double a,b,c;
};

 std::ostream &operator<<( std::ostream &os, const Triangle &triangle );

#endif //PROJECT_VECRORS_TRIANGLE_H
