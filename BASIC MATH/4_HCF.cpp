#include<iostream>
using namespace std;
void gcd(int n,int m){
    while(n>0&&m>0){
        if(n>m) n=n%m;
        else m=m%n;

    }
    if (n==0) cout<<m;
    else cout<<n;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    gcd(num1,num2);
}