#include <iostream>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int с) {
    return a * с;
}

int main() {
    int x = 10;
    int y = 5;
    int с = 3;

    std::cout << "Сложение: " << addition(x, y) << std::endl;
    std::cout << "Вычитание: " << subtraction(x, y) << std::endl;
    std::cout << "Умножение: " << multiplication(x, с) << std::endl;

    return 0;
}
