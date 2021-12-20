#include "Employee.h"
#include "fstream"
#include "cstring"
#include "iostream"


Employee::Employee() {
    name = "Unknown";
    position = "Unknown";
    home_address = "Unknown";
    email = "unknown@gmail.com";
    bitrth_date = "00.00.0000";
    phone_number = "0";
}

int Program_runner ::choise_operation() {
    char choise = '9';
    while (choise != '0') {
        std::cout << "Enter what you want add(1. Name 2. Position 3. Home adress 4. Email "
                     "5.Birthday 6. Phone number 0. Exit)";
        std::cin >> choise;
        switch (choise) {
            case '1':
                add_name();
                break;
            case '2':
                add_position();
                break;
            case '3':
                add_home_address();
                break;
            case '4':
                add_email();
                break;
            case '5':
                add_bitrth_date();
                break;
            case '6':
                add_phone_number();
                break;
            default:
                std::cout << std::endl;
                break;
        }
    }
    return 0;
}

// name, birth date, position (title) in the company, home address, phone, email.
void Program_runner ::display_info() {
    std::cout << "===================================" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Birt date: " << bitrth_date << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Home adress: " << home_address << std::endl;
    std::cout << "Phone: " << phone_number << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "===================================" << std::endl;
}

void Employee::add_name() {
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "You entered: " << name << std::endl;
}

void Employee::add_position() {
    std::cout << "Enter position: ";
    std::cin >> position;
    std::cout << "You entered: " << position << std::endl;
}

void Employee::add_home_address() {
    std::cout << "Enter home address: ";
    std::cin >> home_address;
    std::cout << "You entered: " << home_address << std::endl;
}

void Employee::add_email() {
    std::cout << "Enter email: ";
    std::cin >> email;
    std::cout << "You entered: " << email << std::endl;
}

void Employee::add_bitrth_date() {
    std::cout << "Enter birth day: ";
    std::cin >> bitrth_date;
    std::cout << "You entered: " << bitrth_date << std::endl;
}

void Employee::add_phone_number() {
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    std::cout << "You entered: " << phone_number << std::endl;
}

void Program_runner::writing_file() {
    std::fstream myfile = std::fstream("employee_info.txt", std::ios_base::app);

    static int i = 1;

    myfile << "==================================" << std::endl;
    myfile << "\tEmployee number " << i << std::endl;
    myfile << "Name: " << name << std::endl;
    myfile << "Birt date: " << bitrth_date << std::endl;
    myfile << "Position: " << position << std::endl;
    myfile << "Home adress: " << home_address << std::endl;
    myfile << "Phone: " << phone_number << std::endl;
    myfile << "Email: " << email << std::endl;
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