#ifndef EMPLOYEE_INFO_EMPLOYEE_INFO_FILLER_H
#define EMPLOYEE_INFO_EMPLOYEE_INFO_FILLER_H

#include "Employee.h"
#include <memory>

class Employee_info_filler {
public:
    Employee_info_filler();

    void set_name();
    void set_position();
    void set_home_address();
    void set_email();
    void set_birth_date();
    void set_phone_number();

private:
    std::string name;
    std::string position;
    std::string home_address;
    std::string email;
    std::string birth_date;
    std::string phone_number;

    std::unique_ptr<Employee> employee = std::make_unique<Employee>();

};


#endif 