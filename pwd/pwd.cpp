#include <F:\Programming\Projects\DSS\pwd\pwd.hpp>
#include <iostream>
#include <cstring>
#include <filesystem>


void cp(){
    std::filesystem::path currentPath = std::filesystem::current_path();
    std::cout<<"Currently Path: "<<currentPath;
}
void help(){
    std::cout<<"Help is comming!!!";
}
void gt(std::string path){
    std::filesystem::path pathToDir = path;
    std::filesystem::current_path(pathToDir);
}

void runTime(int argc, char* argv[]){
    if(argc == 1){
        cp();
    } else if(argc == 2){
        if(std::strcmp(argv[1], "-help") == 0){
            help();
        }
    }
}
