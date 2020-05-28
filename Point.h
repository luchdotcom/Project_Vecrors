//
// Created by Lachezar on 29.4.2020 г..
//

#ifndef PROJECT_VECRORS_POINT_H
#define PROJECT_VECRORS_POINT_H

#include <ostream>
#include "Element.h"

class Point : public Element{
public:
    Point( );
    Point(double ,double,double);
    virtual ~Point();
    Point(const Point &);

    void setY( double y );
    void setZ( double z );
    void setX( double x );

    double getX( ) const;
    double getY( ) const;
    double getZ( ) const;

    virtual Point &operator=(const Point&);
    virtual bool operator==( const Point &rhs ) const;
    bool operator < (const Point &) const ;//todo
    bool operator > ( const Point & ) const ;//todo
    virtual std::ostream & ins(std::ostream &)const ;
    virtual std::istream & ext(std::istream &);

private:
     double x,y,z;
};
std::ostream & operator<<(std::ostream &,const Point&);
std::istream & operator>>(std::istream &, Point&);


#endif //PROJECT_VECRORS_POINT_H
