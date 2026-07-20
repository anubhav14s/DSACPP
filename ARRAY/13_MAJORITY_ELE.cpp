#include<iostream>
using namespace std;
int majority(vector <int>&nums){
    unordered_map <int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    for(auto it:mpp){
        if(it.second>=nums.size()/2){
            return it.first;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={3,2,3};
    cout<<majority(nums)<<endl;
    return 0;
}