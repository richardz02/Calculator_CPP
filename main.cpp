#include <iostream>

int main() {

    // Initialize all necessary variables
    int numOperation;
    int x;
    int y;
    int result;
    char usrInput;
    bool doContinue = true;

    // Introduction
    std::cout << "This is a calculator, and it has the following modes of operation:" <<std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;

    while (doContinue) {

        // Ask user input for mode of operation
        std::cout << "------------------------------------------------------------------" << std::endl;
        std::cout << "Please choose one the of modes of operation by inputting the number: ";
        std::cin >> numOperation;

        // Ask user input for numbers to operate on
        std::cout << "Please enter the first number: ";
        std::cin >> x;
        std::cout << "Please enter the second number: ";
        std::cin >> y;

        // Calculation
        switch (numOperation) {
            case 1: 
                result = x + y;
                break;
            case 2:
                result = x - y;
                break;
            case 3:
                result = x * y;
                break;
            case 4:
                result = x / y;
                break;
        }

        // Display final result
        std::cout << "The result of operation is: " << result << std::endl;

        // Ask for user input whether to continue
        std::cout << "Would you like to start a new calculation (Press 'n')? (Press 'q' to quit): ";
        std::cin >> usrInput;

        if (usrInput == 'q') {
            doContinue = false;
        } else if (usrInput == 'n') {
            continue;
        }
    }

    return 0;
}