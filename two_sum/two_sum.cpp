//Solution by Muhammad Ali Khan

#include<iostream>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,4,1,9,8,10};
    int target = 10;
    

    for (int i = 0; i < size(arr) ; i++)
    {
        for (int  j = i + 1; j < size(arr) ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<"The Numbers are: " << arr[i] << ", " << arr[j] << " => At the following indexes: "<< i <<" , "<< j <<"\n";
            }
        
            }
        
    }
}