#include<iostream>
using namespace std;

void merge(vector<int> v,int low,int mid,int high){

}

void ms(vector<int> v,int low,int high){
    if (low>=high) return;
    int mid = (low+high)/2;
    ms(v,low,mid);
    ms(v,mid+1,high);
    merge(v,low,mid,high);
}
void mergesort(vector<int> &arr,int n){
    ms(arr,0,n-1);
}

int main(){
    
}