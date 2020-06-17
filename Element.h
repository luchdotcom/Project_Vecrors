//
// Created by Lachezar on 29.4.2020 г..
//

#ifndef PROJECT_VECRORS_ELEMENT_H
#define PROJECT_VECRORS_ELEMENT_H
#include <ostream>

class Element {
public:
    Element();
    virtual ~Element();
    Element &operator=(const Element&);
    virtual std::ostream & ins(std::ostream &)const =0;
    virtual std::istream & ext(std::istream &)=0;
    double lengthVector() ;
    double getX( ) const;
    double getY( ) const;
    double getZ( ) const;

private:
    double x,y,z;
public:


};


#endif //PROJECT_VECRORS_ELEMENT_H
