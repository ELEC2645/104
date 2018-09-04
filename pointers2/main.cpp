#include <iostream>

int main() {
    // initialise variables with values
    double a = 0.0, b = 0.0;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "&a = " << &a << ", &b = " << &b << std::endl;

    // create a 'null' pointer - nullptr is C++11
    // note the type must match the datatype of the variable
    // the pointer is going to point to
    double *variable_address = nullptr;
    std::cout << "Pointer initialised to: " << variable_address << std::endl; 

    // now point it to 'a' and use it to give 'a' a value
    variable_address = &a;
    std::cout << "Pointer now pointing to 'a': " << variable_address << std::endl; 
    *variable_address = 99.9;
    // now point it to 'b' and do the same
    variable_address = &b;
    std::cout << "Pointer now pointing to 'b':" << variable_address << std::endl; 
    *variable_address = 77.7;
    // print 'a' and 'b' to check values have indeed changed
    std::cout << "a = " << a << ", b = " << b << std::endl;
}