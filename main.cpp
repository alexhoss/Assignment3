#include <iostream>
#include "heap.hpp"
#include "HospitalDispatch.hpp"

int main() {

    /*
     * Singleton
     * Hospital priority queue with a max heap.
     * HopsitalDispatch is a singleton
     */

    HospitalDispatch::get_instance().get_value().push(1);
    HospitalDispatch::get_instance().get_value().push(5);
    HospitalDispatch::get_instance().get_value().push(9);
    HospitalDispatch::get_instance().get_value().push(3);
    HospitalDispatch::get_instance().get_value().push(2);

    cout << "Starting Queue" << endl;

    cout << HospitalDispatch::get_instance().get_value();
    cout << "Pop 1 patient and print new queue" << endl;
    HospitalDispatch::get_instance().get_value().pop();

    cout << HospitalDispatch::get_instance().get_value();

    cout << "Queue Size: " << HospitalDispatch::get_instance().get_value().size() << endl;

    cout << "Pop four times" << endl;

    HospitalDispatch::get_instance().get_value().pop();
    HospitalDispatch::get_instance().get_value().pop();
    HospitalDispatch::get_instance().get_value().pop();
    HospitalDispatch::get_instance().get_value().pop();
    cout << "Queue Size: " << HospitalDispatch::get_instance().get_value().size() << endl;

    cout << "Pop once more" << endl;
    HospitalDispatch::get_instance().get_value().pop();

    cout << "Empty: " << HospitalDispatch::get_instance().get_value().isEmpty() << endl;










    return 0;
}