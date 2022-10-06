#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"The value of a & b after swaping is "<<a<<" "<<b;

}
int main(){
   int a,b;
   cout<<"Enter the value of a & b : ";
   cin>>a>>b;
   swap(a,b);

    return 0;
}