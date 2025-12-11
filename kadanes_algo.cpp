#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int currSum=0,Max_sum=INT_MIN;

    for(int i=0;i<7;i++){
        currSum+=arr[i];
        Max_sum=max(Max_sum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<Max_sum<<endl;
    return 0;
}