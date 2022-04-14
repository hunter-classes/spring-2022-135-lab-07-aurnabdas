#include <iostream>
#include "unindent.h"
#include <string>
#include <cctype>
#include <fstream>


std::string removeLeadingSpaces(std::string line)
{

  std::string result;

  int sl = line.length();
    int ns = 0; // ns stands for No Space
    for (int i = 0; i != sl; i++)
    {
        if (line[i] != ' ')
        {
        ns = i;
        break;
        }
    }
    
 for (int j = ns; j != sl; j++)
    {
        result += line[j];
    }

    return result;


}

  
