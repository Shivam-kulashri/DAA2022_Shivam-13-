#include<bits/stdc++.h>
using namespace std;
void find(int a[], int x)
{
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(a[i]==a[j]){
                cout<<"YES"<<endl;
            }
            break;
        }
    }
            cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        find(a ,x);
    }
}
