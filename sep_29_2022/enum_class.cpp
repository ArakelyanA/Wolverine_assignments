#include <iostream>
#include <string>
#include <unordered_map>
enum  class Colors{Red,Green,Blue,Yellow,Black};
std::string mp(Colors c)
{
    std::unordered_map<Colors,std::string> mp;
    mp[Colors::Red] = "Red";
    mp[Colors::Green] = "Green";
    mp[Colors::Blue] = "Blue";
    mp[Colors::Yellow] = "Yellow";
    mp[Colors::Black] = "Black";
  return mp[c];
}
 Colors mp(std::string str)
{
  std::unordered_map<std::string,Colors> mp;
    mp["Red"] = Colors::Red;
    mp["Green"] = Colors::Green;
    mp["Blue"] = Colors::Blue;
    mp["Yellow"] = Colors::Yellow;
    mp["Black"] = Colors::Black;  
 return mp[str];
}

int main()
{ 
  std::cout << mp(Colors::Red) << std::endl;
  std::cout <<  static_cast<std::underlying_type<Colors>::type>(mp("Black")) << std::endl; 
}