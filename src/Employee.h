#ifndef EMPLOYEE_INFO_SOURCE_H
#define EMPLOYEE_INFO_SOURCE_H

#include <iostream>

class Employee {
public:
    Employee();


protected:
    void add_name();

    void add_position();

    void add_home_address();

    void add_email();

    void add_bitrth_date();

    void add_phone_number();

    std::string name = "Unknown";
    std::string position = "Unknown";
    std::string home_address = "Unknown";
    std::string email = "unknown@gmail.com";

    std::string bitrth_date = "00.00.0000";
    std::string phone_number = "0";
};

class Program_runner : public Employee {
public:
    int choise_operation();

    void display_info();

    void display_info_from_file();

    void writing_file();

    void delete_all_from_file();
};

#endif  // EMPLOYEE_INFO_SOURCE_H
