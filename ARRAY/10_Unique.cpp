#include<iostream>
using namespace std;
int uni(vector<int>&v){
    int i=0;
    for(int j=1;j<v.size();j++){
        if(v[i] != v[j]) {
            i++;
            v[i]=v[j];
        }
    }
    return i+1;
}
int main(){
    vector <int> v={1,2,2,3,4,5,6,6};
    int k=uni(v);
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}