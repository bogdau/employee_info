#include "Program_runner.h"
#include <fstream>

int Program_runner::choise_operation() {
    char choise = '9';
    while (choise != '0') {
        std::cout << "Enter what you want add(1. Name 2. Position 3. Home adress 4. Email "
                     "5.Birthday 6. Phone number 0. Exit)";
        std::cin >> choise;
        switch (choise) {
            case '1':
                employee->add_name();
                break;
            case '2':
                employee->add_position();
                break;
            case '3':
                employee->add_home_address();
                break;
            case '4':
                employee->add_email();
                break;
            case '5':
                employee->add_bitrth_date();
                break;
            case '6':
                employee->add_phone_number();
                break;
            default:
                std::cout << std::endl;
                break;
        }
    }
    return 0;
}


// name, birth date, position (title) in the company, home address, phone, email.
void Program_runner::display_info() {
    std::cout << "===================================" << std::endl;
    std::cout << "Name: " << employee->name << std::endl;
    std::cout << "Birt date: " << employee->bitrth_date << std::endl;
    std::cout << "Position: " << employee->position << std::endl;
    std::cout << "Home adress: " << employee->home_address << std::endl;
    std::cout << "Phone: " << employee->phone_number << std::endl;
    std::cout << "Email: " << employee->email << std::endl;
    std::cout << "===================================" << std::endl;
}


void Program_runner::writing_file() {
    std::fstream myfile = std::fstream("employee_info.txt", std::ios_base::app);

    static int i = 1;

    myfile << "==================================" << std::endl;
    myfile << "\tEmployee number " << i << std::endl;
    myfile << "Name: " << employee->name << std::endl;
    myfile << "Birt date: " << employee->bitrth_date << std::endl;
    myfile << "Position: " << employee->position << std::endl;
    myfile << "Home adress: " << employee->home_address << std::endl;
    myfile << "Phone: " << employee->phone_number << std::endl;
    myfile << "Email: " << employee->email << std::endl;
    myfile << "==================================" << std::endl;
    i += 1;
    myfile.close();
}

void Program_runner::display_info_from_file() {
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

void Program_runner::delete_all_from_file() {
    std::ofstream myfile;
    myfile.open("employee_info.txt", std::ofstream::out | std::ofstream::trunc);
    myfile.close();
}