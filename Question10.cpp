#include<iostream>
using namespace std;
int addnum(int a, int b){
       return a+b;
}
float addnum(float a, float b){
       return a+b;
}
int main(){
    int n;
    cout<<"Choose the following key"<<endl;
    cout<<"1- For adding integer"<<endl;
    cout<<"2- For adding decimal number"<<endl;
    cin>>n;
    switch (n)
    {
    case 1: int a,b;
            cout<<"Enter the integer number ";
            cin>>a>>b;
            cout<<addnum(a,b);
        break;
    case 2: float x,y;
            cout<<"Enter two number ";
            cin>>x>>y;
            cout<<addnum(x,y);
            break;
    default:
        cout<<"Invalid Input";
    }
      return 0;  
    }
    
