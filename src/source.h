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

Employee_info::Employee_info() {
    std::strcpy(name, "Unknown");
    std::strcpy(position, "Unknown");
    std::strcpy(home_address, "Unknown");
    std::strcpy(email, "unknown@gmail.com");

    std::strcpy(bitrth_date, "00.00.0000");
    phone_number[MAX_LENGHT_OF_PHONE_NUMBER] = {0};
}

int Employee_info::choise_operation(){
    char choise = '9';
    while (choise != '0'){
        std::cout << "Enter what you want add(1. Name 2. Position 3. Home adress 4. Email 5.Birthday 6. Phone number 0. Exit)";
        std::cin >> choise;
        switch (choise) {
            case '1':
                add_name();
                break;
            case '2':
                add_position();
                break;
            case '3':
                add_home_address();
                break;
            case '4':
                add_email();
                break;
            case '5':
                add_bitrth_date();
                break;
            case '6':
                add_phone_number();
                break;
            default:
                std::cout<<std::endl;
                break;
        }
    }
                return 0;
}
//name, birth date, position (title) in the company, home address, phone, email.
void Employee_info::display_info(){
    std::cout << "===================================" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Birt date: " << bitrth_date << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Home adress: " << home_address << std::endl;
    std::cout << "Phone: " << phone_number << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "===================================" << std::endl;
}

void Employee_info::add_name() {
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "You entered: " << name << std::endl;
}

void Employee_info::add_position() {
    std::cout << "Enter position: ";
    std::cin >> position;
    std::cout << "You entered: " << position << std::endl;
}

void Employee_info::add_home_address() {
    std::cout << "Enter home address: ";
    std::cin >> home_address;
    std::cout << "You entered: " << home_address << std::endl;
}

void Employee_info::add_email() {
    std::cout << "Enter email: ";
    std::cin >> email;
    std::cout << "You entered: " << email << std::endl;
}

void Employee_info::add_bitrth_date() {
    std::cout << "Enter birth day: ";
    std::cin >> bitrth_date;
    std::cout << "You entered: " << bitrth_date << std::endl;
}

void Employee_info::add_phone_number() {
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    std::cout << "You entered: " << phone_number << std::endl;
}

void Employee_info::writing_file() {

    std::fstream myfile = std::fstream("employee_info.txt", std::ios_base::app);

    static int i = 1;

    myfile << "==================================" << std::endl;
    myfile << "\tEmployee number " << i << std::endl;
    myfile << "Name: " << name << std::endl;
    myfile << "Birt date: " << bitrth_date << std::endl;
    myfile << "Position: " << position << std::endl;
    myfile << "Home adress: " << home_address << std::endl;
    myfile << "Phone: " << phone_number << std::endl;
    myfile << "Email: " << email << std::endl;
    myfile << "==================================" << std::endl;
    i += 1;
    myfile.close();
}

void Employee_info::display_info_from_file() {
    std::string getcontent;
    std::fstream myfile ("employee_info.txt");
    if(myfile.is_open())
    {
        while(! myfile.eof())
        {
            getline(myfile, getcontent);
            std::cout << getcontent << std::endl;
        }
    }
    myfile.close();
}



#endif //EMPLOYEE_INFO_SOURCE_H
