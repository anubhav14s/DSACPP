#include<iostream>
using namespace std;
#include<vector>
int mountain(vector<int>& arr){
    int st=1,end=arr.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if (arr[mid]>arr[mid-1]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }

}
int main(){

    vector<int>Arr={0,3,8,9,5,2};
    int ans=mountain(Arr);
    cout<<"The peak element of the given array is "<<Arr[ans]<<" and it is at index "<<ans<<endl;
}
