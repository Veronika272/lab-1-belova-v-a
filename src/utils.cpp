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

    std::cout << "Сложение: " << сложение(x, y) << std::endl;
    std::cout << "Вычитание: " << вычитание(x, y) << std::endl;
    std::cout << "Умножение: " << умножение(x, коэффициент) << std::endl;

    return 0;
}
