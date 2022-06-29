#include<iostream>
using namespace std;

int main()
{   int n,x;
    int count=0;
    
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    cin>>x;

    for(int i=0;i<n;i++)
    {
     if(A[i]==x)
     {
        count++;
     }
    }

    cout<<"The frequency  :"<<count;


    return 0;
}
