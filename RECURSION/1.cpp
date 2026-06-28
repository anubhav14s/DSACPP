#include<iostream>
using namespace std;

int linear(int i,int n){
    if(i<1) return 0;
    cout<<i<<endl;
    linear(i-1,n);

}

int main(){
    int n;
    cin>>n;
    linear(n,n);
    return 0;
}