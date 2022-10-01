#include <iostream>

void memset (char* arr , char sim ,int count)
{
  for (int i = 0 ; i < count; ++i)
 {
    arr[i] = sim;
 } 
}
int main()
{
 const int count = 6;
 char arr[count];
 char sim = 'a';
 memset(arr , sim , count);

}