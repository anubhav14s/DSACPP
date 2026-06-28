#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
void factors(int n){
    for(int i=0;i<sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    factors(n);
    return 0;
}