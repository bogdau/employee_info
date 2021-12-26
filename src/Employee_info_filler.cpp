#include "Employee_info_filler.h"


Employee_info_filler::Employee_info_filler() {}

void Employee_info_filler::fill_info(Employee &employee)
{
    set_name(employee);
    set_position(employee);
    set_home_address(employee);
    set_email(employee);
    set_birth_date(employee);
    set_phone_number(employee);
}

void Employee_info_filler::set_name(Employee &employee)
{
    std::cout << "Enter name: ";
    std::cin >> name;
    employee.set_name(name);
}

void Employee_info_filler::set_position(Employee &employee)
{
    std::cout << "Enter position: ";
    std::cin >> position;
    employee.set_position(position);
}

void Employee_info_filler::set_home_address(Employee &employee)
{
    std::cout << "Enter home address: ";
    std::cin >> home_address;
    employee.set_home_address(home_address);
}

void Employee_info_filler::set_email(Employee &employee)
{
    std::cout << "Enter email: ";
    std::cin >> email;
    employee.set_email(email);
}

void Employee_info_filler::set_birth_date(Employee &employee)
{
    std::cout << "Enter birth day: ";
    std::cin >> birth_date;
    employee.set_birth_date(birth_date);
}

void Employee_info_filler::set_phone_number(Employee &employee)
{
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    employee.set_phone_number(phone_number);
}
