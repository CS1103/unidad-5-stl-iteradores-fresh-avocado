cmake_minimum_required(VERSION 3.13.4)
project(rango)

set(CMAKE_CXX_STANDARD 14)

add_executable(rango main.cpp range.h range_iterator.h ArithProgression.h ArithProgressionIterator.h GeoProgression.h GeoProgressionIterator.h FibonaProgression.h FibonaProgressionIterator.h)