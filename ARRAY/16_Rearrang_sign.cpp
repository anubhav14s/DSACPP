#include<iostream>
using namespace std;
vector<int> rearrange(vector<int>&nums){
    vector<int> ans(nums.size());
    int pos=0,neg=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            ans[pos]=nums[i];
            pos+=2;
        }
        else{
            ans[neg]=nums[i];
            neg+=2;
        }

    }
    return ans;
}
int main(){
    vector<int>nums={3,2,-1,4,-5,-2};
    vector<int>ans=rearrange(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}