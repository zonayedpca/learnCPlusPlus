#include<iostream>

void doPrint() {
    std::cout << "Print Something" << std::endl;
}

int doSomething() {
    int sum = 10 +10;
    return sum;
}

int main() {
    std::cout << "The Main Function" << std::endl;
    doPrint();
    std::cout << "The returned value is: " << doSomething() << std::endl;
    return 0;
}