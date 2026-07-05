#include<iostream>
using namespace std;
void zerotoend(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[7]={1,3,9,0,4,0,5};
    zerotoend(arr,7);
    for(int x:arr) cout<<x<<" ";
}