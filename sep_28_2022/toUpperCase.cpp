#include <iostream>
#include <string>
std::string toUpperCase(std::string str)
{
	for(int i = 0; i < str.size(); i++)
	{
          if(str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	}
 return str;
}
int main()
{
  std::string str;
  std::cout << "Enter the string" << std::endl;
  std::cin >> str;
  std::cout << "All letters in a string are changed to uppercase  " << std::endl;
  std::cout << toUpperCase(str) << std::endl;

}
