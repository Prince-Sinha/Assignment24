#include<iostream>
#include<cmath>
using namespace std;
float area(int r){
    return 3.14*r*r;
}
int area(int l,int b){
    return l*b;
}
float area(int x,int y, int z){
    float s=(x+y+z)/3;
    return sqrt(s*(s-x)*(s-y)*(s-z));
}
int main(){
    int r,l,b,x,y,z;
    cout<<"Enter the radius of circle : ";
    cin>>r;
    cout<<"Enter the lenght & breadth of rectangle : ";
    cin>>l>>b;
    cout<<"Enter the lenght of side of triangle : ";
    cin>>x>>y>>z;
    cout<<"The area of circle is"<<area(r)<<endl;
    cout<<"The area of rectangle is"<<area(l,b)<<endl;
    cout<<"The area of triangle is"<<area(x,y,z)<<endl;
    return 0;
}