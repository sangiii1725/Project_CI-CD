#include <iostream>
#include "calculator.hpp"
// using namespace std;

int main(){

    calculator C;

    std::cout << "Sum: " << C.add(1000, 5) << std::endl;
    std::cout << "Difference: " << C.sub(1000, 5) << std::endl;
    std::cout << "Product: " << C.multiply(1000, 5) << std::endl;
    std::cout << "Quotient: " << C.division(1000, 5) << std::endl;

    return 0;
}
