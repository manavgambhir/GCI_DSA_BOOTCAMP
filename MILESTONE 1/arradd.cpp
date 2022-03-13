// WAP to print the Addition of all the elements of Array.
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,sum=0;
    cout<<"Enter the array elements: \n";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"SUM: "<<sum;
    return 0;
}