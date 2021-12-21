#include "Program_runner.h"
#include <iostream>
#include <memory>

void cycle(Program_runner &runner) {
    char operation{1};

    std::cout << "Enter operation(1. add new employee 2. display info 3. write info on file 4. "
                 "Display info from file 5. delete all from file 0. for exit ): ";
    std::cin >> operation;

    while (operation != '0') {
        switch (operation) {
            case '1':
                runner.choise_operation();
                break;
            case '2':
                runner.display_info();
                break;
            case '3':
                runner.writing_file();
                break;
            case '4':
                runner.display_info_from_file();
                break;
            case '5':
                runner.delete_all_from_file();
                break;
            default:
                std::cout << "Wrong operation!" << std::endl;
                break;
        }
        std::cout << "Enter operation(1. add new employee 2. display info 3. write info on file 4. "
                     "Display info from file 5. delete all from file 0. for exit ): ";
        std::cin >> operation;
    }
    std::cout << "Good day! " << std::endl;
}

int main() {
    auto runner = std::make_unique<Program_runner>();
    cycle(*runner);
}
