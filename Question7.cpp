#include<iostream>
using namespace std;

int add(int a,int b,int c=0){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b & c : ";
    cin>>a>>b>>c;
    cout<<"Addition of a & b is "<<add(a,b)<<endl;
    cout<<"Addition of a,b & c is "<<add(a,b,c);
    
    return 0;
}