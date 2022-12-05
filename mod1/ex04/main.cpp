#include <fstream>
#include <cstring>
#include <iostream>

int main(int argc, char **argv){
    std::string line;
    std::string temp;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if(argc != 4){
        std::cerr << "Wrong arguments!" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if(!file){
        std::cerr << "Сan not open the file!" << std::endl;
        return (1);
    }
    std::ofstream fout(strcat(argv[1], ".replace"));
    if(!fout){
        std::cerr << "Сan not open the fout!" << std::endl;
        return (1);
    }
    while(std::getline(file, line)){
        size_t pos = 0;
        temp = line;
        while((pos = line.find(s1, pos)) != std::string::npos){
            temp.erase(pos, s1.length());
            temp.insert(pos, s2);
            pos += s1.length();
        }
        fout << temp << std::endl;
    }
    return (0);
}