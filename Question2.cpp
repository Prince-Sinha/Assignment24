#include<iostream>
using namespace std;
int highestdigit(int a){
    int max=a%10,i;
    for(int i=0;a>0;i++){
        a/=10;
    }
    for(int j=0;j>i;j++){
         a/=10;
         if(max>=a%10){
            max=a%10;
         }
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The highest digit is "<<highestdigit(n);
    return 0;
}