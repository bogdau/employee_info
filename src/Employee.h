#ifndef EMPLOYEE_INFO_SOURCE_H
#define EMPLOYEE_INFO_SOURCE_H

#include "fstream"

const int MAX_NAME_SIZE = 30;
const int MAX_LENGHT_OF_PHONE_NUMBER = 15;
const int BIRTH_DATE = 10;

class Employee {
public:
    Employee();

    int choise_operation();

    void display_info();

    void display_info_from_file();

    void writing_file();

    void delete_all_from_file();
private:
    std::string name = "Unknown";
    std::string position = "Unknown";
    std::string home_address = "Unknown";
    std::string email = "unknown@gmail.com";

    std::string bitrth_date = "00.00.0000";
    std::string phone_number = "0";

    void add_name();

    void add_position();

    void add_home_address();

    void add_email();

    void add_bitrth_date();

    void add_phone_number();

};

#endif  // EMPLOYEE_INFO_SOURCE_H
