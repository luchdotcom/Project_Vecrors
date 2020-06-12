//
// Created by Lachezar on 12.6.2020 г..
//

#include "Segment.h"

Segment::Segment( ):Point(),start(0),end(0),t(0) {

}

Segment::Segment(const Point &lhs, const Vector& rhs, int start, int end ,int t):Point(lhs),Vector(rhs),start(start),end(end),t(t){
   if (t >=start && t<=end){
       double x=lhs.getX()+rhs.getX()*t;
       double y=lhs.getY()+rhs.getY()*t;
       double z=lhs.getZ()+rhs.getZ()*t;
   }
}

Segment::Segment( const Segment & rhs)  : Point(rhs), Vector(rhs), Line(rhs) {
    start=rhs.start;
    end=rhs.end;
    t=rhs.t;
}

Segment &Segment::operator=( const Segment & rhs) {
    if (this!=&rhs){
        delete this;
    }
    Line::operator=(rhs);
    start=rhs.start;
    end=rhs.end;
    t=rhs.t;

    return *this;
}

Segment::~Segment( ) {
}

double Segment::segmentLen( Segment & rhs) {
    return sqrt(pow(getX()-rhs.getX(),2)+pow(getY()-rhs.getY(),2)+pow(getZ()-rhs.getZ(),2));
}

Point Segment::segmentMiddle(const Segment& rhs ) {
    return Point(getX()+rhs.getX()/2,getY()+rhs.getY()/2,getZ()+rhs.getZ()/2);
}

bool Segment::operator==( const Point &rhs ) {
    return (getX()*rhs.getY()==rhs.getX()*getY());
}
