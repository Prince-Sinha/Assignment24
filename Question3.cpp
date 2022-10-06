#include<iostream>
using namespace std;
void power(int a,int b){
    int fac=1;
    for(int i=1;i<=b;i++){
         fac=fac*a;
    }
    cout<<"x raised power y is "<<fac;
}
int main(){
    int x,y;
    cout<<"Enter the value of x & y : ";
    cin>>x>>y;
    power(x,y);
    return 0;
}