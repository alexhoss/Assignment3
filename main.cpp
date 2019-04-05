#include <iostream>
#include "heap.hpp"
#include <algorithm>
#include <vector>
int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> intList = {0,1,2,3,4,5,6,7,8,9};

    heap<vector<int>> myHeap(intList);

    myHeap.print();
    cout << myHeap.pop() << endl;
    cout << myHeap.pop() << endl;

    cout << myHeap << endl;




    return 0;
}