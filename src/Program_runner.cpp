#include "Program_runner.h"
#include <fstream>

Program_runner::Program_runner()
{
}

void Program_runner::start()
{
    char operation{1};

    std::cout << "Enter operation(1. add new employee 2. display info 3. write info on file 4. "
                 "Display info from file 5. delete all from file 0. for exit ): ";
    std::cin >> operation;

    while (operation != '0') {
        switch (operation) {
            case '1':
                create_employee();
                break;
            case '2':
                display_info();
                break;
            case '3':
                writing_file();
                break;
            case '4':
                display_info_from_file();
                break;
            case '5':
                delete_all_from_file();
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

void Program_runner::create_employee()
{
    employee_info_filler->fill_info(*employee);
}

void Program_runner::display_info()
{
    std::cout << "===================================" << std::endl;
    std::cout << "Name: " << employee->get_name() << std::endl;
    std::cout << "Birt date: " << employee->get_birth_date() << std::endl;
    std::cout << "Position: " << employee->get_position() << std::endl;
    std::cout << "Home adress: " << employee->get_home_address() << std::endl;
    std::cout << "Phone: " << employee->get_phone_number() << std::endl;
    std::cout << "Email: " << employee->get_email() << std::endl;
    std::cout << "===================================" << std::endl;
}

void Program_runner::writing_file()
{
    std::fstream myfile = std::fstream("employee_info.txt", std::ios_base::app);

    static int i = 1;

    myfile << "==================================" << std::endl;
    myfile << "\tEmployee number " << i << std::endl;
    myfile << "Name: " << employee->get_name() << std::endl;
    myfile << "Birt date: " << employee->get_birth_date() << std::endl;
    myfile << "Position: " << employee->get_position() << std::endl;
    myfile << "Home address: " << employee->get_home_address() << std::endl;
    myfile << "Phone: " << employee->get_phone_number() << std::endl;
    myfile << "Email: " << employee->get_email() << std::endl;
    myfile << "==================================" << std::endl;
    i += 1;
    myfile.close();
}

void Program_runner::display_info_from_file()
{
    std::fstream myfile("employee_info.txt");
    if (myfile.is_open()) {
        while (!myfile.eof()) {
            std::string getcontent;
            getline(myfile, getcontent);
            std::cout << getcontent << std::endl;
        }
    }
    myfile.close();
}

void Program_runner::delete_all_from_file()
{
    std::ofstream myfile;
    myfile.open("employee_info.txt", std::ofstream::out | std::ofstream::trunc);
    myfile.close();
}