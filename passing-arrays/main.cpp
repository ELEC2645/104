#include <iostream>

int sum_of_array(int array[],int n);
void square_array(int array[], int n);
int safer_sum_of_array(const int array[],int n);

int main() {
    // create array and initialise
    int array[5] = {1,2,3,4,5};

    int sum = sum_of_array(array,5);
    std::cout << "Sum = " << sum << std::endl;

    sum = safer_sum_of_array(array,5);
    std::cout << "Sum = " << sum << std::endl;

    square_array(array,5);
    for (int i = 0; i < 5; i++) {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

}

int sum_of_array(int array[],int n) {
    int sum = 0;
    array[0] = 100;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}

int safer_sum_of_array(const int array[],int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}

void square_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = array[i] * array[i];   
    }
}
