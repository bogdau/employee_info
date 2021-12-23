#include "Employee.h"
#include <iostream>

Employee::Employee()
{
    name = "Unknown";
    position = "Unknown";
    home_address = "Unknown";
    email = "unknown@gmail.com";
    birth_date = "00.00.0000";
    phone_number = "0";
}

// Name
std::string Employee::get_name()
{
    return name;
}

void Employee::set_name(const std::string& name)
{
    this->name = name;
}

// Position
std::string Employee::get_position()
{
    return position;
}

void Employee::set_position(const std::string& position)
{
    this->position = position;
}

// Home address
std::string Employee::get_home_address()
{
    return home_address;
}

void Employee::set_home_address(const std::string& home_address)
{
    this->home_address = home_address;
}

// Email
std::string Employee::get_email()
{
    return email;
}

void Employee::set_email(const std::string& email)
{
    this->email = email;
}

// Birth date
std::string Employee::get_birth_date()
{
    return birth_date;
}

void Employee::set_birth_date(const std::string& birth_date)
{
    this->birth_date = birth_date;
}

// Phone number
std::string Employee::get_phone_number()
{
    return phone_number;
}

void Employee::set_phone_number(const std::string& phone_number)
{
    this->phone_number = phone_number;
}