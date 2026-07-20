#include<iostream>
using namespace std;
int subarraysum(vector<int>&nums){
    int maxi=0;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<subarraysum(nums)<<endl;
    return 0;
}