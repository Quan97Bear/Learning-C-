#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Entre your name: ";
    std::cin >> str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl;
    return 0;
}