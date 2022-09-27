#include <iostream>
#include <string>

std::string ltrim(std::string str)
{
	int i = 0;
  for( ; i < str.size(); i++)
  {

   if(str[i] == ' ')
      i++;
   else break;
  }
  str.erase(0,i);

return str;
}

int main()
{
  std::string str;
  std::cout << "Enter the string" << std::endl;
  getline(std::cin, str);
  std::cout << "The string after ltrim()" << std::endl;
  std::cout << ltrim(str) << std::endl;
}

