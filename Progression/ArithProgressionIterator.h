//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_ARITHPROGRESSIONITERATOR_H
#define RANGO_ARITHPROGRESSIONITERATOR_H


class ArithProgressionIterator {
    int curr;
    int step;
    friend class ArithProgression;
    ArithProgressionIterator(int curr, int step): curr{curr}, step{step} {}
public:
    bool operator==(const ArithProgressionIterator& other) const {
        return curr == other.curr;
    }
    bool operator!=(const ArithProgressionIterator& other) const {
        return curr < other.curr;
    }
    int& operator*() {
        return curr;
    }
    ArithProgressionIterator& operator++() {
        curr += step;
        return *this;
    }
    ArithProgressionIterator& operator++(int) {
        auto it = this;
        ++(*this);
        return *it;
    }
};


#endif //RANGO_ARITHPROGRESSIONITERATOR_H
