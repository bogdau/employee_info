/*
    The program should provide such functionality as:

    run in interactive mode (run until asked to quit)
    add a new employee
    remove an employee
    save all employees info between program runs (in a local file on disk)
    show list of employees
    an employee must store info such as - name, birth date, position (title) in the company, home
   address, phone, email.
 */

#include "source.h"
#include <iostream>
#include <memory>

void cycle(Employee_info& employee)
{
    char operation{1};

    std::cout << "Enter operation(1. add new employee 2. display info 3. write info on file 4. "
                 "Display info from file 0. for exit ): ";
    std::cin >> operation;

    while (operation != '0') {
        switch (operation) {
        case '1':
            employee.choise_operation();
            break;
        case '2':
            employee.display_info();
            break;
        case '3':
            employee.writing_file();
            break;
        case '4':
            employee.display_info_from_file();
            break;
        default:
            std::cout << "Wrong operation!" << std::endl;
            break;
        }
        std::cout << "Enter operation(1. add new employee 2. display info 3. write info on file, "
                     "0. for exit  ): ";
        std::cin >> operation;
    }
    std::cout << "Good day! " << std::endl;
}

int main()
{
    auto employeeInfo = std::make_unique<Employee_info>();
    cycle(*employeeInfo);
}
