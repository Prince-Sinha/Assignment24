#include<iostream>
using namespace std;
void fibonacciseries(int n){
    int a=-1,b=1,no=0;
    for(int i=0;b<=n;i++){
        b=a+b;
        a=b-a;
        if(b==n){
            no=b;
            break;
        }
    }
    if(no==n){
            cout<<"Given number is a term in a Fibonacci series";
        }
    else{
        cout<<"Given number is not a term in a Fibonacci series";
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    fibonacciseries(n);

    return 0;
}