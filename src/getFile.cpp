#include"preprocesses.hpp"

void getFile(const char* &SERVER_IP, const char* &nickname){
    std::ifstream iFile;
    std::string ip;
    std::string nickstr;

    iFile.open("config.txt");
    if(!iFile.is_open()){
        std::cout << "Cannot find \'config.txt\', using default ip(127.0.0.1) & nickname(User). . ." << std::endl;
        SERVER_IP = DEFAULT_IP;
        nickname = DEFAULT_NICKNAME;
    }else{      
        std::getline(iFile, ip);
        SERVER_IP = ip.c_str();
        std::cout << ip << std::endl;
        std::cout << ip.c_str() << std::endl;
        std::cout << SERVER_IP << std::endl;
        std::getline(iFile, nickstr);
        nickname = nickstr.c_str();
    }

}