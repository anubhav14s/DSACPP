#include<iostream>
using namespace std;
void butterfly(int n){
    for (int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars =2*n-i;

        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces 
        for(int j=0;j<2*(n-1);j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n ;
    cin>>n;
    butterfly(n);
    return 0;
}