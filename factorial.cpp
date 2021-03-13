#include<iostream>
using namespace std;
int calfac(int n){
    if (n<=1){
        return 1;
    }
    return n * calfac(n-1);
}
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<< " is "<<calfac(a)<<endl;
    return 0;
}