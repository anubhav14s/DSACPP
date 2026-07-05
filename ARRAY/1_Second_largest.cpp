#include<iostream>
using namespace std ;

int slargest(int arr[],int n ){
int largest = arr[0];
int slargest=INT_MIN;

for(int i=1;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
    else if (arr[i]<largest && arr[i]>slargest){
        slargest=arr[i];
    }
}
if(slargest==INT_MIN) return -1;
return slargest;
}

int ssmallest(int arr[],int n ){
int smallest = arr[0];
int ssmallest=INT_MAX;

for(int i=1;i<n;i++){
    if(arr[i]<smallest){
        ssmallest=smallest;
        smallest=arr[i];
    }
    else if (arr[i]>smallest && arr[i]<ssmallest){
        ssmallest=arr[i];
    }
}
if(ssmallest==INT_MAX) return -1;
return ssmallest;
}

int main(){

    int arr[6]={2,9,11,45,6,7};
    cout<<"Second largest ";
    cout<<slargest(arr,6)<<endl;
    cout<<"Second smallest ";
    cout<<ssmallest(arr,6)<<endl;
    return 0;
}