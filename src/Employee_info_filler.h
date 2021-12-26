#ifndef EMPLOYEE_INFO_EMPLOYEE_INFO_FILLER_H
#define EMPLOYEE_INFO_EMPLOYEE_INFO_FILLER_H

#include "Employee.h"
#include <memory>

class Employee_info_filler {
public:
    Employee_info_filler();

    void fill_info(Employee &employee);
private:
    void set_name(Employee &employee);
    void set_position(Employee &employee);
    void set_home_address(Employee &employee);
    void set_email(Employee &employee);
    void set_birth_date(Employee &employee);
    void set_phone_number(Employee &employee);

    std::string name;
    std::string position;
    std::string home_address;
    std::string email;
    std::string birth_date;
    std::string phone_number;
};


#endif