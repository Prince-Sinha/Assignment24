#include<iostream>
using namespace std;

int maximum(int a,int b){
    int max=a>=b?a:b;
    return max;
}
float maximum(float a,float b){
    float max=a>=b?a:b;
    return max;
}
int main(){
    float a,b;
    cout<<"Enter the number : ";
    cin>>a>>b;
    cout<<"The greatest number is "<<maximum(a,b);
    return 0;
}