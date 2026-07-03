#include<iostream>
#include<vector>
using namespace std;

int partation(vector<int> &v,int low ,int high){
    int pivot=v[low];
    int i=low;
    int j=high;
    while(i<j){
        while(i <= high && v[i] <= pivot){
            i++;
        }
        while(j >= low && v[j] > pivot){
            j--;
        }
        if(i<j){
            swap(v[j],v[i]);
        }
    }
    swap(v[low],v[j]);
    return j;
}
void QuickSort(vector<int> &v,int low ,int high){

    if(low<high){
        int part=partation(v,low , high);
    QuickSort(v,low,part-1);
    QuickSort(v,part+1,high);
    }
}

int main(){
    vector <int> v{1,3,2,4,7,9,5,8,6,11};
    QuickSort(v,0,v.size()-1);
    
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}