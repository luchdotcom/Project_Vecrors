//
// Created by Lachezar on 29.4.2020 г..
//

#ifndef PROJECT_VECRORS_ELEMENT_H
#define PROJECT_VECRORS_ELEMENT_H
#include <ostream>

class Element {
public:
    virtual std::ostream & ins(std::ostream &)const =0;
    virtual std::istream & ext(std::istream &)=0;
     double lengthVector() ;


private:
    double x,y,z;
};


#endif //PROJECT_VECRORS_ELEMENT_H
