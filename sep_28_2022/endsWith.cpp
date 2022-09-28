#include <iostream>
#include <string>
bool endsWith(std::string str, std::string substr)
{
	if(substr.size() > str.size())
		return false;
      for(int i = substr.size()-1, j = str.size()-1; i >= 0;j--, i--)
        {
          if(str[j] != substr[i])
              return false;
        }

 return true;
}

int main()
{
 std::string str,substr;
 std::cout << "Enter the string " << std::endl;
 getline(std::cin, str);
 std::cout << "Enter the substring " << std::endl;
 std::cin >> substr;
std::cout<<"'" << str << "' ends with '" << substr << "' : " << std::boolalpha << endsWith(str,substr)<<std::endl;

}
