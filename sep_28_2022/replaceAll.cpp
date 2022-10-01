#include <iostream>
#include <string>

std::string replaceAll (std::string s, const std::string& t, const std::string& r)

{
    int k;
    while ((k = s.find(t)) > -1)
    {
        s.erase(k , t.size());
        s.insert(k, r);
    }
    return s;
}
int main()
{
  std::string s,t,r;
  std::cin >> s >> t >> r;
  std::cout << replaceAll(s,t,r) << std::endl;
}