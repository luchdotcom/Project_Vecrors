//
// Created by Lachezar on 30.4.2020 г..
//

#ifndef PROJECT_VECRORS_VECTORLENGTHEXCEPTION_H
#define PROJECT_VECRORS_VECTORLENGTHEXCEPTION_H
#include <stdexcept>

class VectorLengthException : public std::exception{
public:
    explicit VectorLengthException( const std::string & );


private:
};


#endif //PROJECT_VECRORS_VECTORLENGTHEXCEPTION_H
