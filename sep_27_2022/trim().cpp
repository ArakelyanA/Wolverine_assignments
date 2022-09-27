#include <iostream>
#include <string>

std::string trim(std::string str)
{
  int j = 0;
  for(int i = str.size()-1; i >= 0 && j < str.size(); )
 {
   if(str[i] == ' ')
   {
     str.pop_back();
     i--;
   }
   else if(str[j] == ' ')
          j++;
   else break;
 }
   str.erase(0,j);

return str;
}

int main()
{
  std::string str;
  std::cout << "Enter the string" << std::endl;
  getline(std::cin, str);
  std::cout << "The string after trim()" << std::endl;
  std::cout << trim(str) << std::endl;
}
