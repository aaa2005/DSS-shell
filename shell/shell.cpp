#include <F:\Programming\Projects\DSS\shell\shell.hpp>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>


void hello(char* name[]){
    std::cout<<"hellow "<<name[1]<<std::endl;
}


void runTime(){
    std::cout<< R"(
 /$$$$$$$                   /$$$$$$                                                    /$$                            /$$$$$$  /$$                 /$$ /$$
| $$__  $$                 /$$__  $$                                                  |__/                           /$$__  $$| $$                | $$| $$
| $$  \ $$ /$$$$$$$$      | $$  \__/  /$$$$$$  /$$    /$$ /$$$$$$   /$$$$$$   /$$$$$$  /$$  /$$$$$$  /$$$$$$$       | $$  \__/| $$$$$$$   /$$$$$$ | $$| $$
| $$  | $$|____ /$$/      |  $$$$$$  /$$__  $$|  $$  /$$//$$__  $$ /$$__  $$ /$$__  $$| $$ /$$__  $$| $$__  $$      |  $$$$$$ | $$__  $$ /$$__  $$| $$| $$
| $$  | $$   /$$$$/        \____  $$| $$  \ $$ \  $$/$$/| $$$$$$$$| $$  \__/| $$$$$$$$| $$| $$  \ $$| $$  \ $$       \____  $$| $$  \ $$| $$$$$$$$| $$| $$
| $$  | $$  /$$__/         /$$  \ $$| $$  | $$  \  $$$/ | $$_____/| $$      | $$_____/| $$| $$  | $$| $$  | $$       /$$  \ $$| $$  | $$| $$_____/| $$| $$
| $$$$$$$/ /$$$$$$$$      |  $$$$$$/|  $$$$$$/   \  $/  |  $$$$$$$| $$      |  $$$$$$$| $$|  $$$$$$$| $$  | $$      |  $$$$$$/| $$  | $$|  $$$$$$$| $$| $$
|_______/ |________/       \______/  \______/     \_/    \_______/|__/       \_______/|__/ \____  $$|__/  |__/       \______/ |__/  |__/ \_______/|__/|__/
                                                                                           /$$  \ $$                                                      
                                                                                          |  $$$$$$/                                                      
                                                                                           \______/                                                       
)"<< std::endl;
    printf("Welcome to DSS (Dz Sovereign Shell)\nVersion: %.1f\n", VERSION);
    std::string toolPromt, toolName, args, toolAva;
    bool exit = true;
    while(exit){
        printf("DSS> ");
        std::getline(std::cin, toolPromt);
        std::istringstream in(toolPromt);
        in >> toolName;
        if(toolName=="exit"){
            exit=false;
            printf("Thank you for using DSS :)");
        }

        std::getline(in, args);
        toolAva = "where " + toolName + " > nul 2>&1";
        if(!system(toolAva.c_str())== 0){
            std::cout << "No such command: " << toolName;
        } else {
            system(toolPromt.c_str());
        }
        std::cout<<"\n";
    }
    
}