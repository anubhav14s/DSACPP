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
vector<int>majority2(vector<int>&nums){
    int n=nums.size();
    int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1==0&&nums[i]!=ele2){
            cnt1=1,ele1=nums[i];
        }
        else if(cnt2==0&&nums[i]!=ele1){
            cnt2=1,ele2=nums[i];
        }
        else if(nums[i]==ele1) cnt1++;
        else if(nums[i]==ele2) cnt2++;
        else{
            cnt1--,cnt2--;
        }
    }
    vector<int>ans;
    int fre1=0,fre2=0;
    for(int i=0;i<n;i++){
        if(ele1==nums[i])fre1++;
        if(ele2==nums[i])fre2++;
    }
    if(fre1>n/3) ans.push_back(ele1);
    if(fre2>n/3) ans.push_back(ele2);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>nums={2,1,1,3,1,4,2,2};
    vector<int>ans=majority(nums);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}