#include<iostream>
using namespace std;
vector<int> answer(vector<int>&nums){
    int maxi=INT_MIN,n=nums.size();
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if (nums[i]>maxi){
            ans.push_back(nums[i]);
            maxi=nums[i];
        }
    }
    return ans;

}
int main(){
    vector<int> nums={10,22,19,21,3,0,6};
    vector<int>ans=answer(nums);
    for(int x:ans) cout<<x<<" ";
    return 0;
}