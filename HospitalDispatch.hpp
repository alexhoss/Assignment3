//
// Created by Xan on 2019-04-05.
//
#include "heap.hpp"
#include <vector>
#include <algorithm>

#ifndef ASSIGNMENT3_HOSPITALDISPATCH_HPP
#define ASSIGNMENT3_HOSPITALDISPATCH_HPP

/*
 * Singleton Design Pattern
 */
class HospitalDispatch {

public:
    static HospitalDispatch &get_instance() {
        static HospitalDispatch instance;
        return instance;
    }

private:
    vector<int> priorityIntList = {};

    heap<vector<int>> myHeap{priorityIntList};

    HospitalDispatch() = default;

public:
    HospitalDispatch(HospitalDispatch const &) = delete;

    void operator=(HospitalDispatch const &) = delete;

    heap<vector<int>> &get_value();


};


#endif //ASSIGNMENT3_HOSPITALDISPATCH_HPP
