#include<iostream>
using namespace std;
vector<int>twosum(vector<int>&nums,int target){
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        int more = target - nums[i];
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[nums[i]]=i;
    }
    return {};

}
int main(){
    vector<int> nums={1,7,11,6,15};
    int target=13;
    vector<int>ans=twosum(nums,target);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}