#include <iostream>

// mod 10 a number to return the last digit of the number
long lastDigit(long num){
    return num % 10;
}

int main(){
    long x = 5;
    long y = 245789;
    long z = 2380428;

    std::cout << "The last digit of " << x << " is " << lastDigit(x) << "\n\n";
    std::cout << "The last digit of " << y << " is " << lastDigit(y) << "\n\n";
    std::cout << "The last digit of " << z << " is " << lastDigit(z) << "\n\n";
    return 0;
}