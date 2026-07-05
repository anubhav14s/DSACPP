#include<iostream>
using namespace std;
//BRUTFORCE APPROCH
void rotateright(int arr[],int n,int d){
    d=d%n;
    if (d==0) return ;
    int temp[d];
    for(int i=n-d;i<n;i++){
        temp[i-(n-d)]=arr[i];
    }
    for(int i=n-d-1;i>=0;i--){
        arr[i+d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
}
//BRUTEFORCE APPROCH
void rotateleft(int arr[],int n,int d){
    d=d%n;
    if (d==0) return ;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }

}
int main(){
    int arr[6]={2,9,5,3,1,7};
    rotateleft(arr,6,29);
    rotateright(arr,6,3);
    for(int x:arr){
        cout<<x<<" ";
    }
}