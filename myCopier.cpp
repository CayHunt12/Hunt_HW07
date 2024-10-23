//myCopier.cpp
//This Application copies the contents of one file to another.
//Command line Arguments:
//1. Source file to read from
//2. Destination file to write to

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){
if (argc != 3) {
std::cerr << "Usage:" << argv[0] << "<source file><destination file>" <<
std::endl;
return 1;
}

std::ifstream sourceFile(argv[1]);
if (!sourceFile.is_open()) {
std::cerr << "Error opening source file:" << argv[1] << std::endl;
return 1;
}

std::ofstream
destinationFile(argv[2]);
if (!destinationFile.is_open()) {
std::cerr << "Error opening destination file:" << argv[2] << std::endl;
}

std::string line;
while (std::getline(sourceFile,line)) {
destinationFile<<line<<std::endl;
}

sourceFile.close();
destinationFile.close();

return 0;
}
