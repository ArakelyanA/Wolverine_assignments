#include <iostream>
#include <string>
std::string toLowerCase(std::string str)
{
        for(int i = 0; i < str.size(); i++)
        {
          if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
 return str;
}
int main()
{
  std::string str;
  std::cout << "Enter the string" << std::endl;
  std::cin >> str;
  std::cout << "All letters in a string are changed to lowercase " << std::endl;
  std::cout << toLowerCase(str) << std::endl;
}                                             
