#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first>p2.first) return true;
    return false ;

}
void algo(){
    vector<int> vec = {4,7,2,1};
    
    sort(vec.begin(), vec.end());  //Sort the elements in assending 
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" "<<vec[3]<<endl;
    
    sort(vec.begin(), vec.end(), greater<int>());  //Sort the elements descending
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" "<<vec[3];

    pair<int ,int>arr[]{{1,2},{2,1},{4,1}};

    //sort it according to second element 
    //if second ele same then according to first but in descending 


    
}

int main (){
    algo();
    return 0;
}
