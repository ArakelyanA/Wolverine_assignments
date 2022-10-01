#include <iostream>

void memcpy(char* arr2 , char* arr1 )
{
  int j = 0, i = 0;
 while(arr1[j] != '\0')
 {
    ++j;
 }
 while(i < j)
 {
    arr2[i] = arr1[i];
    i++;
 }
 arr2[j] = '\0';
}

int main()
{
char arr1[] = "hello" ;
char arr2[20];
memcpy(arr2 ,arr1);
} 