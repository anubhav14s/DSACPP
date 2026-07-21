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
//Kadanes Algorithm
int kadane(vector<int>&nums){
    long long int sum=0,maxi=INT_MIN;
    int start,end;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if (maxi<sum){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<kadane(nums)<<endl;
    return 0;
}