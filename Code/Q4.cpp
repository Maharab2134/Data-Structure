//Write a program to binary search an element in an array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10], i, num, index, first, last, mid;
    cout<<"Enter 5 Numbers: ";
    for(i=0; i<5; i++)
    cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    first = 0;
    last = 4;
    mid = (first+last)/2;
    while(first<=last)
    {
        if(arr[mid]<num)
            first = mid+1;
        else if(arr[mid]==num)
        {
            cout<<"\nFound at Index No."<<mid;
            break;
        }
        else
            last = mid-1;
        mid = (first+last)/2;
    }
    if(first>last)
        cout<<"\nNot Found - "<<num;
    cout<<endl;
    return 0;
}
