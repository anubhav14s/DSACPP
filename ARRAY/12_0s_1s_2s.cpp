#include<iostream>
using namespace std;
vector<int> zeros(vector<int>&nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++,low++;
        }
        else if(nums[mid]==1) mid++;
        else if(nums[mid]==2){
            swap(nums[high],nums[mid]);
            high--;
        }

    }
    return nums;
}
int main(){
    vector<int> asdf={0,1,0,2,2,1,1,0,0,2,1,0,1};
    zeros(asdf);
    for(int x:asdf){
        cout<<x<<" ";
    }
}