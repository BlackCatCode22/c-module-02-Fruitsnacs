// largestOfThree project cit-66
// Alex Lopez
// 1/29/2025

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int largest;

    if (num1 > num2) {
        if (num1 > num3) {
            largest = num1;
        }
        else {
            largest = num3;
        }
    }
    else {
        if (num2 > num3) {
            largest = num2;
        }
        else {
            largest = num3;
        }
    }

    cout << "The largest integer is: " << largest << endl;

    return 0;
}