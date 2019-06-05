//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_GEOPROGRESSIONITERATOR_H
#define RANGO_GEOPROGRESSIONITERATOR_H


class GeoProgressionIterator {
    int curr;
    int step;
    friend class GeoProgression;
    GeoProgressionIterator(int curr, int step): curr{curr}, step{step} {}
public:
    bool operator==(const GeoProgressionIterator& other) const {
        return curr == other.curr;
    }
    bool operator!=(const GeoProgressionIterator& other) const {
        return curr < other.curr;
    }
    int& operator*() {
        return curr;
    }
    GeoProgressionIterator& operator++() {
        curr *= step;
        return *this;
    }
    GeoProgressionIterator& operator++(int) {
        auto it = this;
        ++(*this);
        return *it;
    }
};


#endif //RANGO_GEOPROGRESSIONITERATOR_H
