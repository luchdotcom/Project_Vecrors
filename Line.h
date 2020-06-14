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
    Line(int );
    Line(const Line&);
    Line & operator=(const Line&);
   ~Line() override;
   Line(double ,double ,double );
    Line(Vector&,Point&,int);
    Line(Point&,Point&, int );
    Vector directionLine();
    Vector normalVector( const Line&);
    double angelBetweenTwoLines(const Line&);//todo

    bool operator+(const Point&) const;
    bool operator||(const Line&) const;
    bool operator==(const Line&) const;
    bool operator&&(const Line&) const;
    bool operator!=(const Line&);
    bool operator|(const Line&) const;
   std::ostream& ins(std::ostream&)const override ;
    std::istream & ext(std::istream &) override;
private:
    int t;
    double x,y,z;
};
std::ostream & operator<<(std::ostream &,const Line&);
std::istream & operator>>(std::istream &, Line&);

#endif //PROJECT_VECRORS_LINE_H
