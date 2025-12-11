#include<iostream>
using namespace std;
int solution(vector<int> nums){

    sort(nums.begin(),nums.end());
int n=nums.size();
    int freq=1,ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans ;
        }
    }
    return -1;
}

int main(){
    vector<int> nums={1,5,2,5,5,5,2};
    int ans=solution(nums);
    cout<<ans<<endl;
    
}