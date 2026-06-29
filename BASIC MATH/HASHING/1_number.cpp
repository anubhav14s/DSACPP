#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }
    int m;
    cout<<"Enter number of querries"<<endl;
    cin>>m;
    int querry[m];
    cout<<"Enter the querry"<<endl;
   for(int i=0;i<m;i++){
        cin>>querry[i];
   }
   int ans[m];
   for(int i=0;i<m;i++){
    cout<<querry[i]<<" -> "<<hash[querry[i]]<<" time"<<endl;
   }
    return 0;

}