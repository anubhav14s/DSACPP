#include<iostream>
using namespace std;
int counter(vector<int>&nums,int key){
    int n=nums.size();
    int count=0;
    for (int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==key) count++;
        }
    }
    return count;
}
int main (){
    vector<int> nums{-1,4,-5,3,-1,4,1,-2,3};
    int ans=counter(nums,3);
    cout<<ans;
    return 0;
    
}