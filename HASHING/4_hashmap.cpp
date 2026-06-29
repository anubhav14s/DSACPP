#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]+=1;
    }

    char c;
    cin>>c;
    cout<<mpp[c]<<endl;
   
    return 0;

}