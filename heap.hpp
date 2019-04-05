//
// Created by Xan on 2019-04-05.
//
#include <algorithm>
#include <vector>
#include <iostream>
#ifndef ASSIGNMENT3_HEAP_HPP
#define ASSIGNMENT3_HEAP_HPP
using namespace std;

template<typename container>

class heap {
private:

    typedef typename container::value_type element;

    vector<element> arr;

    /*
    * Sort the array as a max heap
    */

    void heapify() {
        make_heap(begin(arr), end(arr));
    }

public:


    heap(container &c) {
        for (auto it = c.begin(); it != c.end(); it++) {
            cout << *it << endl;
            arr.push_back(*it);
        }
        heapify();

    }

    /*
     * Pop root element off the heap and heapify
     */
    element pop() {
        element temp = arr[0];
        arr.erase(arr.begin());
        heapify();
        return temp;
    }

    /*
     * Insert an element and heapify
     */
    void push(element e) {
        arr.push_back(e);
        heapify();
    }

    /*
     * return size of heap
     */
    size_t size() {
        return arr.size();
    }

    /*
     * return true if heap is empty
     */
    bool isEmpty() {
        return arr.empty();
    }

    friend ostream& operator<<(ostream& os, heap hp){
        for(auto it = hp.arr.begin(); it != hp.arr.end(); it++)
            os << *it << " ";
        os << endl;
        return os;
    }


    void print() {

        for (auto it = arr.begin(); it != arr.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    };


};


#endif //ASSIGNMENT3_HEAP_HPP
