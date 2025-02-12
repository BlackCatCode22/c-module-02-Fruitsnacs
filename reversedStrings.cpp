// Reversed Strings project cit-66
// Alex Lopez
// 1/29/2025

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "This Text Will Be Reversed";

    std::reverse(str.begin(), str.end());

    std::cout << str << std::endl;

    return 0;
}