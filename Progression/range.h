//
// Created by rrivas on 05/06/19.
//

#ifndef RANGO_RANGE_H
#define RANGO_RANGE_H

#include "range_iterator.h"

class range {
    int start;
    int stop;
    int step;
public:
    range(int stop):start{0}, stop{stop}, step{1} {}
    range(int start, int stop):start{start}, stop{stop}, step{1} {}
    range(int start, int stop, int step): start{start}, stop{stop}, step{step} {}

    using iterator = range_iterator;
    iterator begin() const {
        return range::iterator(start, step);
    }

    iterator end() const {
        return range::iterator(stop, step);
    }

};

#endif //RANGO_RANGE_H
