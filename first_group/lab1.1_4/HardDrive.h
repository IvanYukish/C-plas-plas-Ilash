//
// Created by yukish on 19.05.19.
//
#include "iostream"
#include "string"
#include "map"
#ifndef STRDATA_HARDDRIVE_H
#define STRDATA_HARDDRIVE_H



using namespace std;
class HardDrive {
    unsigned int disk_size;
    unsigned short index;
    map<string, string> disk_memory;
    map<string, string>::iterator itr;


public:
    HardDrive(unsigned int size){
        disk_size = size;
    }

    int add_file(unsigned int file_size, string file_name){

    }

    int remove_file(string file_name) {
        
    }



};

#endif //STRDATA_HARDDRIVE_H
