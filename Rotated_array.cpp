#include<iostream>
#include<vector>
using namespace std;
int rotated(vector<int>& a,int tar){
    int st=0,end=a.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(a[mid]==tar){
            return mid;
        }
        if(a[st]<a[mid]){//LEFT PART SORTED
            if(a[st]<=tar && a[mid]>=tar){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{//RIGHT PART SORTED
            if(a[mid]<=tar && a[end]>=tar){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr ={6,7,0,1,2,3,4,5};
    int target=13;
    int ans=rotated(arr,target);
    cout<<ans; 
}

