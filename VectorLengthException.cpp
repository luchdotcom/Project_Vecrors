//
// Created by Lachezar on 30.4.2020 г..
//

#include "VectorLengthException.h"

VectorLengthException:: VectorLengthException( const std::string& txt, int min):std::exception(),min(min){}

