//The Solved quadratic equation in example 2.5

#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"Unique Solution:"<<x1<<" and "<<x2<<endl;
    }
    else if(d==0){
        x1=(-b)/(2*a);
        cout<<"Unique Solution: "<<x1<<" and "<<x1<<endl;
    }
    else{
        cout<<"No real soluation"<<endl;
    }
}