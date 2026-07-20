#include<iostream>
using namespace std;
int majority(vector <int>&nums){
    unordered_map <int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    for(auto it:mpp){
        if(it.second>nums.size()/2){
            return it.first;
        }
    }
    return -1;
}
int voting(vector<int>&nums){
    int count=0;
    int ele;
    for(int i=0;i<nums.size();i++){
        if (count>0){
            if(ele==nums[i])count++;
            else count--;
        }
        else ele=nums[i],count++;
    }
}
int main(){
    vector<int> nums={3,2,3};
    cout<<majority(nums)<<endl;
    return 0;
}