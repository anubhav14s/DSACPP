#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int SI=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SI]){
                SI=j;
            }
        }
        swap(arr[i],arr[SI]);
    }
}
int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[5]={4,1,3,5,2};
    selectionSort(arr,n);
    printArr(arr,n);
    return 0;

}