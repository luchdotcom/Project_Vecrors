//
// Created by Lachezar on 28.5.2020 г..
//

#include "Line.h"

Line::Line( Vector & lhs, Point &rhs ):Vector(lhs),Point(rhs) {

}

Line::Line( Point &lhs, Point & rhs ):Point(){

}

Vector Line::directionLine( ) {
    return Vector();
}

Vector Line::normalVector( ) {
    return Vector();
}

double Line::angelBetweenTwoLines( ) {
    return 0;
}

bool Line::operator+( const Line & ) {
    return false;
}

bool Line::operator||( const Line & ) {
    return false;
}

bool Line::operator==( const Line & ) {
    return false;
}

bool Line::operator&&( const Line & ) {
    return false;
}

bool Line::operator!=( const Line & ) {
    return false;
}

bool Line::operator|( const Line & ) {
    return false;
}
