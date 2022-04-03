#include <iostream>

template<typename T>

void InputArray(T array[8]){
    std::cout << "Fill the array (8): " << std::endl;
    for(int i = 0; i <8; ++i)
    {
        std::cout << "Input element number " << i + 1 << " : ";
        std::cin >> array[i];
    }
}

template<typename T>
T Calc(T array[8]){
    T sum = 0;
    for(int i = 0; i < 8; ++i){
        sum += array[i];
    }
    return sum/8;
}
int main() {
    int array[8];
    InputArray(array);
    std::cout << "Arithmetic mean: " << Calc(array) << std::endl;
    return 0;
}
