//
// Created by bo on 13.12.21.
//

#ifndef EMPLOYEE_INFO_SOURCE_H
#define EMPLOYEE_INFO_SOURCE_H
#include "fstream"

const int MAX_NAME_SIZE = 30;
const int MAX_LENGHT_OF_PHONE_NUMBER = 15;
const int BIRTH_DATE = 10;
class Employee_info {
private: 
    char name[MAX_NAME_SIZE] = {"Unknown"};
    char position[MAX_NAME_SIZE];
    char home_address[MAX_NAME_SIZE];
    char email[MAX_NAME_SIZE];
    
    char bitrth_date[BIRTH_DATE]; 
    char phone_number[MAX_LENGHT_OF_PHONE_NUMBER];

    void add_name();
    void add_position();
    void add_home_address();
    void add_email();
    void add_bitrth_date();
    void add_phone_number();
public:

    Employee_info();

    int choise_operation();
    
    void  display_info();
    
    void display_info_from_file();
    
    void writing_file();
};




#endif //EMPLOYEE_INFO_SOURCE_H
