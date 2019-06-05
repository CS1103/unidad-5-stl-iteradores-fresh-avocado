//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_ARITHPROGRESSION_H
#define RANGO_ARITHPROGRESSION_H


#include "ArithProgressionIterator.h"

class ArithProgression {
    int start;
    int stop;
    int step;
public:
    ArithProgression(int stop):start{0}, stop{stop}, step{1} {}
    ArithProgression(int start, int stop):start{start}, stop{stop}, step{1} {}
    ArithProgression(int start, int stop, int step): start{start}, stop{stop}, step{step} {}

    using iterator = ArithProgressionIterator;
    iterator begin() const {
        return ArithProgression::iterator(start, step);
    }

    iterator end() const {
        return ArithProgression::iterator(stop, step);
    }
};


#endif //RANGO_ARITHPROGRESSION_H
