#include <iostream>

int main() {
  // create a 32-bit (4 byte) variable
  unsigned int variable = 0xABCDEF89;
  std::cout << "Variable value is 0x" << std::hex << variable << std::endl;
  std::cout << "Size of variable is " << sizeof(variable) << " bytes\n";
  std::cout << "Address of variable is " << &variable << std::endl;

  // create a char (byte) pointer and point to the variable address
  // we need to cast the int to a char to match the pointer type
  unsigned char *pointer = (unsigned char *)&variable;

  // iterate through each byte in the variable
  for (int i = 0; i < 4; i++) {
    // now print out the byte at the address
    std::cout << (unsigned int *)pointer << " | ";
    std::cout << std::hex << (unsigned int)*pointer << std::endl;
    // increment the pointer to point at the next address
    pointer++;
  }
}