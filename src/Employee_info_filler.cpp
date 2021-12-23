#include "Employee_info_filler.h"


Employee_info_filler::Employee_info_filler() {


}

void Employee_info_filler::set_name() {
    std::cout << "Enter name: ";
    std::cin >> name;
    employee->set_name(name);
}

void Employee_info_filler::set_position() {
    std::cout << "Enter position: ";
    std::cin >> position;
    employee->set_position(position);
}

void Employee_info_filler::set_home_address() {
    std::cout << "Enter home address: ";
    std::cin >> home_address;
    employee->set_home_address(home_address);
}

void Employee_info_filler::set_email() {
    std::cout << "Enter email: ";
    std::cin >> email;
    employee->set_email(email);
}

void Employee_info_filler::set_birth_date() {
    std::cout << "Enter birth day: ";
    std::cin >> birth_date;
    employee->set_birth_date(birth_date);
}

void Employee_info_filler::set_phone_number() {
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    employee->set_phone_number(phone_number);
}
