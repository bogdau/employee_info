#include "Employee.h"
#include <fstream>
#include <cstring>
#include <iostream>


Employee::Employee() {
    name = "Unknown";
    position = "Unknown";
    home_address = "Unknown";
    email = "unknown@gmail.com";
    bitrth_date = "00.00.0000";
    phone_number = "0";
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
