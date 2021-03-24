#include <iostream>
#include <cmath>

// The number of digits a number has can be found by loop dividing the number by 10 and counting the loops
int findNumOfDigits(int num){
    int s = 0;
    while(num){
        s += 1;
        num /= 10;
    }
    return s;
}

// Find the last digit of the number, multiply by 10 to the power of the corresponding inverse digit spot
// then sum it all up
int reverse(int num){
    int reversednum = 0;
    int k = pow(10, findNumOfDigits(num)-1);
    while(num){
        reversednum += k * (num % 10);
        num /= 10;
        k /= 10;
    }
    return reversednum;
}

int main(){
    int x = 45798;
    int y = 12345;
    int z = 9988;
    int n = 349787;
    std::cout << x << " reversed is " << reverse(x) << ".\n\n";
    std::cout << y << " reversed is " << reverse(y) << ".\n\n";
    std::cout << z << " reversed is " << reverse(z) << ".\n\n";
    std::cout << n << " reversed is " << reverse(n) << ".\n\n";
    return 0;
}