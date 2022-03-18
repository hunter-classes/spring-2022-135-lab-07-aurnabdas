#include <iostream>
#include "unindent.h"
#include <string>
#include <cctype>


std::string removeLeadingSpaces(std::string line)
{

  std::string result;

  int i = 0;
  if (isspace(line[i]))
  {
      do
      {
	  i++;
      } 
      while (isspace(line[i]));
  }

  result = line.substr(i);
  return result;


}
