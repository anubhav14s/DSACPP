#include<iostream>
using namespace std;
void rotateright(int arr[],int n,int d){
    d=d%n;
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+(n-d));
    reverse(arr,arr+n);

    
}
void rotateleft(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

}
int main(){
    int arr[6]={2,9,5,3,1,7};
    rotateleft(arr,6,29);
    rotateright(arr,6,3);
    for(int x:arr){
        cout<<x<<" ";
    }
}