//Գրել ծրագիր, որը կգտնի զանգվածի տարրերի գումարը։
#include <iostream>
int main()
{
    int arr[] = {1,4,7,9,2};
    int size = sizeof(arr)/sizeof(arr[0]), sum = 0 ;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    std::cout << "The sum of the elements of array : " << sum << std::endl;
}