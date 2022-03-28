//         Find total number of occurance
#include <iostream>
using namespace std;

int countoccurance(int arr[],int n,int x)
{
    int frq=0;
    for(int i=0;i<n;i++)
     if(x==arr[i])
       frq++;
     return frq;
}
int main()
{
    int arr[] = {1,2,3,4,4,4,4,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=4;
    cout<<countoccurance(arr,n,x);
    return 0;
}
