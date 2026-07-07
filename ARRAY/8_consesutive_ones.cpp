#include<iostream>
using namespace std;
int maxone(int arr[],int n){
    int max=0;
    int ct=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            ct++;
        }
        else{
            if(ct>max)max=ct;
            ct=0;
        }
    }
    return max;
}
int main(){
    int arr[10]={1,2,4,1,1,7,1,1,1,9};
    cout<<maxone(arr,10)<<endl;
    return 0;
}