//
//  Collatz.cpp
//  Start with any integer greater than zero; if the number is even, divide it by two, otherwise multiply it by three and add one to it. Iterat this process until the number you reach is the number one.
//
//  Created by Ozgur Can Gumus on 6/22/24.
//

#include <iostream>

int main(int argc, char ** argv){
    
    int number = 10;
    
    while (number != 1) {
        if (number % 2 == 0) {
            number = number/2; // Divide it by 2
        } else {
            number = number * 3 + 1; // Multiply it by 3 and add 1
        }
        std::cout << number << std::endl;
    }
    return 0;
}
