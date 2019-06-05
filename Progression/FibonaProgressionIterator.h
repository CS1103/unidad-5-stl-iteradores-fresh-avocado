//
// Created by Gabriel Spranger Rojas on 2019-06-05.
//

#ifndef RANGO_FIBONAPROGRESSIONITERATOR_H
#define RANGO_FIBONAPROGRESSIONITERATOR_H

class FibonaProgressionIterator {
    int curr;
    int step1;
    int step2;
    friend class FibonaProgression;
    FibonaProgressionIterator(int curr, int step1, int step2): curr{curr}, step1{step1}, step2{step2} {}
    FibonaProgressionIterator(int curr, int step1): curr{curr}, step1{step1} {}
public:
    bool operator==(const FibonaProgressionIterator& other) const {
        return curr == other.curr;
    }
    bool operator!=(const FibonaProgressionIterator& other) const {
        return curr < other.curr;
    }
    int& operator*() {
        return curr;
    }
    FibonaProgressionIterator& operator++() {
        curr = step1 + step2;
        step1 = step2;
        step2 = curr;
        return *this;
    }
};

#endif //RANGO_FIBONAPROGRESSIONITERATOR_H
