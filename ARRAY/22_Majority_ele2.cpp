#include<iostream>
using namespace std;
vector<int> majority(vector<int>&nums){
    int n=nums.size();
    vector<int>ans;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/3) ans.push_back(it.first);
    }
    return ans;
}
int main(){
    vector<int>nums={2,1,1,3,2,4,2,1};
    vector<int>ans=majority(nums);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}