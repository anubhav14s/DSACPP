#include<iostream>
#include<vector>
using namespace std;
void VECTORS() {
    vector<int> v ;
    v.push_back(1);

    vector<pair<int,int>> vp;//Pairs in vectors 
    vp.push_back({1,2});

    vector<int> v1(5);//vector of size 5 
    vector<int> v2(5,100);//{100,100,100,100,100,100}
    vector<int>v3={100,24,53,90,84};
    vector <int> v4(v3);//content of v3 gets copied to v4

    //Iterator in vector 
    //it stores the memory address 
    vector<int>::iterator it=v3.begin();
    // cout<< *(it)<<endl;
    // cout<<v3[2]<<endl;

    //Back
    // cout<<v3.back()<<endl;//last element of the vector

    //Loops in vector
    //auto dectects the data type we dont have to write  vector<int>::iterator
    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for (auto x: v3){
        cout<<x<<" ";
    }cout<<endl;


    // Deletion in a vector 
    vector<int> v5 ={10,44,73,9,14,35,72};
    v5.erase(v5.begin());
    v5.erase(v5.begin(),v5.begin()+2);
    for (auto x: v5){
        cout<<x<<" ";
    }


    //Insert function 
    cout<<"Insert Function"<<endl;
    vector <int> v{10,45,37,98};
    
}
int main(){
    VECTORS();
    return 0;
}

