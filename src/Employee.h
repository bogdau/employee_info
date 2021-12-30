#ifndef EMPLOYEE_INFO_SOURCE_H
#define EMPLOYEE_INFO_SOURCE_H

#include <iostream>

class Employee {
public:
    Employee();

    std::string get_name();
    void set_name(const std::string& name);
    std::string get_position();
    void set_position(const std::string& position);
    std::string get_home_address();
    void set_home_address(const std::string& home_address);
    std::string get_email();
    void set_email(const std::string& email);
    std::string get_birth_date();
    void set_birth_date(const std::string& birth_date);
    std::string get_phone_number();
    void set_phone_number(const std::string& phone_number);

private:
    std::string name = "Unknown";
    std::string position = "Unknown";
    std::string home_address = "Unknown";
    std::string email = "unknown@gmail.com";

    std::string birth_date = "00.00.0000";
    std::string phone_number = "0";
};

#endif
