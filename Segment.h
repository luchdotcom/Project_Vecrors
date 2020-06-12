//
// Created by Lachezar on 12.6.2020 г..
//

#ifndef PROJECT_VECRORS_SEGMENT_H
#define PROJECT_VECRORS_SEGMENT_H


#include "Line.h"

class Segment : virtual public Line{
public:
    Segment();
    Segment(const Point&,const Vector&,int ,int,int );
    Segment(const Segment&);
    Segment& operator=(const Segment&);
    ~Segment();
    double segmentLen(Segment&);
    Point segmentMiddle(const Segment&);

    bool operator==(const Point&);
private:
    int t;
    int start,end;


};


#endif //PROJECT_VECRORS_SEGMENT_H
