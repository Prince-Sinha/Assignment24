#include<iostream>
using namespace std;
void pascaltriangle(int n){
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=n-1-i){
                 if(j==n-1 || j==n-1-i)
                     a[i][j]=1;
                 else
                  a[i][j]=a[i-1][j]+a[i-1][j+1];
                      cout<<a[i][j]<<" ";
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    pascaltriangle(n);
    return 0;
}