// Fun with functions project cit-66
// Alex Lopez
// 1/29/2025

#include <iostream>

int getAnIntFromTheUser() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

void compareTwoInts(int a, int b) {
    if (a > b) {
        std::cout << a << " is greater than " << b << "\n";
    } else if (a < b) {
        std::cout << b << " is greater than " << a << "\n";
    } else {
        std::cout << "Both numbers are equal." << "\n";
    }
}

int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();
    
    compareTwoInts(num1, num2);
    
    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of the two numbers is: " << sum << "\n";
    
    return 0;
}
