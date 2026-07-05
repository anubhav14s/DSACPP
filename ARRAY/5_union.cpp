#include<iostream>
using namespace std;
vector<int> unionn(vector<int>&n1,vector<int>&n2){
    vector<int>onion;
    int s1=n1.size(),s2=n2.size();
    int i=0,j=0;
    while(i<s1 && j<s2){
        if(n1[i]<=n2[j]){
            if(onion.size()==0||onion.back()!=n1[i]){
                onion.push_back(n1[i]);
            }
            i++;
        }
        else{
            if(onion.size()==0||onion.back()!=n2[j]){
                onion.push_back(n2[j]);
            }
            j++;
        }
    }
    while(j<s2){
        if(onion.size()==0||onion.back()!=n2[j]){
                onion.push_back(n2[j]);
            }
            j++;
    }
    while(i<s1){
        if(onion.size()==0||onion.back()!=n1[i]){
                onion.push_back(n1[i]);
            }
            i++;
    }
    return onion;
}
int main(){
    vector<int>n1{1,1,3,4,5,5};
    vector<int>n2{2,3,4,4,5,6};
    vector<int> ans=unionn(n1,n2);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}