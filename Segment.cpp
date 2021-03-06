//
// Created by Lachezar on 12.6.2020 г..
//

#include "Segment.h"

Segment::Segment( ):Point(),start(0),end(0),t(0) {

}

Segment::Segment(const Point &lhs, const Vector& rhs, int start, int end ,int t):Point(lhs),Vector(rhs),start(start),end(end),t(t){
       double x=lhs.getX() + rhs.getX() * t;
       double y=lhs.getY()+rhs.getY()*t;
       double z=lhs.getZ()+rhs.getZ()*t;

}

Segment::Segment( const Segment & rhs)  {
    start=rhs.start;
    end=rhs.end;
    t=rhs.t;
}

Segment &Segment::operator=( const Segment & rhs) {
    if ( this != &rhs ) {
    Line::operator=( rhs );
    start = rhs.start;
    end = rhs.end;
    t = rhs.t;
}
    return *this;
}

Segment::~Segment( ) {
}

double Segment::segmentLen() {
    Vector v(getX(),getY(),getZ());
    Point p(getX(),getY(),getZ());
    return sqrt(pow(v.getX()-p.getX(),2)+pow(v.getY()-p.getY(),2)+pow(v.getZ()-p.getZ(),2));

}

Point Segment::segmentMiddle() {
    Vector v;
    return Point(getX()+v.getX()/2,getY()+v.getY()/2,getZ()+v.getZ()/2);
}

bool Segment::operator==( const Point &rhs ) {
    return (getX()*rhs.getY()==rhs.getX()*getY());
}
