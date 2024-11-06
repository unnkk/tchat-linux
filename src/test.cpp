#include<iostream>
#include<fstream>

int main(int argc, const char* argv[]){
    std::ifstream iFile;
    iFile.open("test.txt");
    if(!iFile.is_open()){
        std::cout << "foo";
    }
    std::string lol{"ababa"};
    std::getline(iFile, lol);
    for(char ch : lol){
        if(ch == '\n'){
            std::cout << "FAKIN \\n DETECTED";
        }else{
            std::cout << ch << std::endl;
        }
    }
}