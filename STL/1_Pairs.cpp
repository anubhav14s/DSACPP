#include<iostream>
#include <utility>
using namespace std;
//Pair -> A container that can store two values also works as a data type,the two values can be of any data type.
void Pairs(){
    pair<int,float>p={1,1.9};
    cout<<"first pair value is : "<<p.first<<endl;
    cout<<"second pair value is : "<<p.second<<endl;

    pair<int,pair<char,float>>q={1,{'A',3.9}};
    cout<<"first pair value is : "<<q.first<<endl;
    cout<<"first second pair value is : "<<q.second.first<<endl;
    cout<<"second second pair value is : "<<q.second.second<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
} 
int main(){
    Pairs();
    return 0;
}