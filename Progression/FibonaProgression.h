//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_FIBONAPROGRESSION_H
#define RANGO_FIBONAPROGRESSION_H

#include "FibonaProgressionIterator.h"

class FibonaProgression {
    int start = 0;
    int stop;
    int step = 0;
    int step2 = 1;
public:
    FibonaProgression(int stop): start{1}, stop{stop} {}

    using iterator = FibonaProgressionIterator;
    iterator begin() const {
        return FibonaProgression::iterator(start, step, step2);
    }

    iterator end() const {
        return FibonaProgression::iterator(stop, step);
    }
};

#endif //RANGO_FIBONAPROGRESSION_H
