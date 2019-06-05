//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_GEOPROGRESSION_H
#define RANGO_GEOPROGRESSION_H


#include "GeoProgressionIterator.h"

class GeoProgression {
    int start;
    int stop;
    int step;
public:
    GeoProgression(int stop): start{1}, stop{stop}, step{2} {}
    GeoProgression(int start, int stop): start{start}, stop{stop}, step{2} {}
    GeoProgression(int start, int stop, int step): start{start}, stop{stop}, step{step} {}

    using iterator = GeoProgressionIterator;
    iterator begin() const {
        return GeoProgression::iterator(start, step);
    }

    iterator end() const {
        return GeoProgression::iterator(stop, step);
    }
};


#endif //RANGO_GEOPROGRESSION_H
