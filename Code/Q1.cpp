//Write a program to implement max number and location in an array. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a[10],i,n,max;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"Maximum number is: "<<max<<endl;
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        {
            cout<<"Location of maximum number is: "<<i/1<<endl;
        }
    }
    return 0;
}