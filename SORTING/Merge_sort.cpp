#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &v,int low,int mid,int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<=mid&&right<=high){
        if (v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(v[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(v[right]);
            right++;
    }
    for (int i=low ;i<=high;i++){
        v[i]=temp[i-low];
    }
}

void ms(vector<int> &v,int low,int high){
    if (low>=high) return;
    int mid = (low+high)/2;
    ms(v,low,mid);
    ms(v,mid+1,high);
    merge(v,low,mid,high);
}
void mergesort(vector<int> &v,int n){
    ms(v,0,n-1);
}

int main(){
   
    vector<int> v={3,1,2,4,1,5,6,7,4,9,11};
    mergesort(v,v.size());
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}