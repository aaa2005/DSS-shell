#include <iostream>
#include <cstring>
#include <cstdlib>

int main(int argc, char* argv[]){
    if(argc==3){
        if(std::strcmp(argv[1], "aaa2005") == 0){
            int password = std::atoi(argv[2]);
            if(password == 5555){
                std::cout<<"Sovereign Mode Activated!\nWelcome Back Dz Sovereign";
            }
        }
    } else {
        std::cout<<"hello "<<argv[1];
    }
}




//TO DO: this will be secret login command to Disguise the good tools
/*
    Advanced mode will voice
*/