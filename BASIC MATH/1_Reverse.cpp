#include<iostream>
using namespace std;

void reverse(int n){
    int rem=1,rev=0;
    while(n>0){
        rem=n%10;
        n/=10;
        rev=rev*10+rem;

    }
    cout<<rev;
}

int main(){
    int n;
    cin>>n;
    reverse(n);
}