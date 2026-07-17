#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    int breaks=0;
    for(int i =0;i<n;i++){
        if (arr[i]>arr[(i+1)%n]){
             breaks++;
        }
    }
    if (breaks<2) return true;
    else return false;
}
int main(){
    int arr[5]={3,4,5,1,2};
    cout<<issorted(arr,5);
}