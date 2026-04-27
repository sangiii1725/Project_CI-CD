#include <iostream>
#include "calculator.hpp"
using namespace std;

double calculator::addition(double a, double b){
    return a+b;
}

double calculator::sub(double a, double b){
    return a-b;
}

double calculator::multiply(double a, double b){
    return a*b;
}

double calculator::division(double a, double b){
    if(b == 0){
        cout << "as divider is 0, division is not possible" << endl;
        return 0;
    }else{
        return a/b;
    }
}