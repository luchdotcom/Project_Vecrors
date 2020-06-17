#include "Element.h"

Element::Element( ) {
}

Element::~Element( ) {
}

double Element::lengthVector( ) {
    return 0;
}

double Element::getX( ) const {
    return x;
}

double Element::getY( ) const {
    return y;
}

double Element::getZ( ) const {
    return z;
}

Element &Element::operator=(const  Element & ) {
    return *this;
}
