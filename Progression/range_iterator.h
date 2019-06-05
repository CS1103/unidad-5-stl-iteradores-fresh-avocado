//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_RANGE_ITERATOR_H
#define RANGO_RANGE_ITERATOR_H

#include "range.h"

class range_iterator {
    int curr;
    int step;
    friend class range;
    range_iterator(int curr, int step): curr{curr}, step{step} {}
public:
    bool operator==(const range_iterator& other) const {
        return curr == other.curr;
    }
    bool operator!=(const range_iterator& other) const {
        return curr < other.curr;
    }
    int& operator*() {
        return curr;
    }
    range_iterator& operator++() {
        curr += step;
        return *this;
    }
    range_iterator& operator++(int) {
        auto it = this;
        ++(*this);
        return *it;
    }
};

#endif //RANGO_RANGE_ITERATOR_H
