#include<iostream>
using namespace std;

int solution(vector<int> nums,int size){
    int freq=0,ans=0;
    for(int i=0;i<size;i++){
        if (freq==0) {
            ans=nums[i];
        }
        if (ans==nums[i]){
            freq++;
        }
        else {
            freq--;
        }
        int count = 0;
        for(int i=0;i<size;i++){
            if(nums[i]==ans){
                count++;
            }
        }
        if(count>size/2){
            return ans;
        }
        else{
            return -1;
        }
    }
    return ans;
}
int main(){
    int size=6;
    vector<int> nums={1,2,1,1,2,1,1};
    int ans =solution(nums,size);
    cout<<"The majority element is "<<ans<<endl;
}