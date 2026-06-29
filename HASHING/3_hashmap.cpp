#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }


    int m;
    cout<<"Enter number of querries"<<endl;
    cin>>m;
    int querry[m];
    cout<<"Enter the querry"<<endl;
   for(int i=0;i<m;i++){
        cin>>querry[i];
   }
   
   for(int i=0;i<m;i++){
    cout<<querry[i]<<" -> "<<mpp[querry[i]]<<" time"<<endl;
   }
    return 0;

}