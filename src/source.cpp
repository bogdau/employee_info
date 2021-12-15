//
// Created by bo on 13.12.21.
//

#include "source.h"
#include "fstream"
void write_to_file(){
    std::ofstream myfile;

    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();

}
