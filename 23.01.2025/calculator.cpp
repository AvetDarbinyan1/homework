#include <iostream>


int main() {
    double num1 = 0;
    double num2 = 0;
    char operation;

    std::cout << "enter in number 1";
    std::cin >> num1;

    std::cout << "(+, -, *, /): ";
    std::cin >> operation;

    std::cout << "enter in number 2";
    std::cin >> num2;

    if (operation == '+') {
	    std::cout << "result" << num1 + num2 << std::endl;
    }
    else if (operation == '-') {
	    std::cout << "result " << num1 - num2 << std::endl;
    }
    else if (operation == '*') {
	    std::cout << "result " << num1 * num2 << std::endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
		std::cout << "result" << num1 / num2 << std::endl;
        } else {
		std::cout << "result" << std::endl;
        }
    }
   

    return 0;
}

