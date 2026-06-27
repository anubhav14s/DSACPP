#include<iostream>
using namespace std;
#include<set>

void explainset(){
    set <int> s;
    s.insert(4);//{4}
    s.insert(7);//{4,7}
    s.insert(7);//{4,7} only store unique ele
    s.insert(45);//{4,7,45}
    
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    //FIND
    auto it1=s.find(45);//return the memory address
    if (it1 != s.end()) {
        cout << "Element Found: " << *it1 << endl;
    } else {
        cout << "Element Not Found" << endl;
    }

    //BEGIN
    auto it=s.begin();//returns the memo adress of first ele 
    cout<<*(it)<<endl;//{4}

    cout<<s.count(7);//returns true or false based on whether the element is present in the set or not
    cout<<endl;

    
    //ERASE
    set <int> s1{2,9,3,6,1,7,4,11,14};
    s1.erase(6);//{2,9,3,1,7,4,11,14}
    auto it2=s1.find(4);
    auto it3=s1.find(3);
    s1.erase(it3,it2);
    for(int x:s1){
        cout<<x<<" ";
    }



}

int main(){
    explainset();
    return 0;
}