#include <iostream>

int main() {
    // initialise a variable with a value
    int variable = 255;
    // create a pointer to point to the variable address using the 
    // address-of operator &
    int *variable_address = &variable;
    std::cout << "Variable = " << variable << std::endl;
    // print the address of the variable
    std::cout << "Variable address = " << variable_address << std::endl; 
    // print the value store in the variable the pointer is pointing to
    // using the dereference operator *
    std::cout << "Variable value = " << *variable_address << std::endl; 
}