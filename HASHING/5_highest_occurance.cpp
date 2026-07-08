#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[8]={1,7,1,6,2,7,5,3};
    map<int,int>mpp;
    for(int i=0;i<8;i++){
        mpp[arr[i]]+=1;
    }
    int element=0,frequency=0;
    for(auto it:mpp){
        element=it.first;
        frequency=it.second;

    }
}