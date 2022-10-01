#include <iostream>
#include <string>
bool tartsWith(const std::string& str, const std::string& substr)
{
	if(substr.size() > str.size())
		return false;
	for (int i = 0; i < substr.size(); i++)
	{
          if(str[i] != substr[i])
              return false;
	}
 
 return true;
}
 
int main()
{
 std::string str, substr;
 std::cout << "Enter the string " << std::endl;
 getline(std::cin, str);
 std::cout << "Enter the substring " << std::endl;
 std::cin >> substr;
 std::cout << "'" << str << "' starts with '" << substr << "' : "<<  std::boolalpha << tartsWith(str,substr) << std::endl;
}
