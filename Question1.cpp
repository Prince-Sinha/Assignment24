#include<iostream>
using namespace std;
void checkprimenumber(int a){
    int count=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
           count++;
        }
    }
    if(count==1 || a==2)
        printf("Given number is prime number");
    else
       printf("Given number is not prime number");
}
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     checkprimenumber(n);

    return 0;
}