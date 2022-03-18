#include <iostream> 
#include <fstream> 
#include "unindent.h"
#include "indent.h"

int main() { 
    std::string line;
    int outer_bracket = 0;
    int inner_bracket = 0; 

    std::ifstream fin("bad-code.cpp"); 
    if(fin.fail()) 
    { 
        std::cerr << "File cannot be opened"; 
        exit(1);
    }
std::cout << "_______________________________________________\n";
    std::cout << "(Task A: Indent)" << std::endl;
    while(getline(fin, line))
    { 
        std::cout << removeLeadingSpaces(line) << std::endl;
    }

    // std::cout << "\nFixed lines of code: " << std::endl; 
    fin.close(); 
    std::cout << "_______________________________________________\n";

    fin.open("bad-code.cpp");
    std::cout << "(Task B: Indent)" << std::endl;

    while(getline(fin, line)) 
    { 

        inner_bracket = countChar(line, '}') + inner_bracket;
        std::string unindented_line = removeLeadingSpaces(line);
        std::cout << indent(unindented_line, outer_bracket, inner_bracket) << std::endl;
        outer_bracket = countChar(line, '{') + outer_bracket;
    }

    fin.close();

    std::cout << "_______________________________________________\n";
    outer_bracket = 0;
    inner_bracket = 0;

    

    return 0; 
}