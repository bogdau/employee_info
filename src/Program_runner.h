#ifndef EMPLOYEE_INFO_PROGRAM_RUNNER_H
#define EMPLOYEE_INFO_PROGRAM_RUNNER_H

#include "Employee.h"
#include "Employee_info_filler.h"
#include <iostream>
#include <memory>

class Program_runner {
public:
    Program_runner();

    void start();
    void choise_operation();
    void display_info();
    void display_info_from_file();
    void writing_file();
    void delete_all_from_file();


private:
    std::unique_ptr<Employee> employee = std::make_unique<Employee>();
    std::unique_ptr<Employee_info_filler> employee_info_filler = std::make_unique<Employee_info_filler>();
};


#endif
