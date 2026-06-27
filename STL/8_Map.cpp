#include<iostream>
#include<map>
using namespace std;

void explainmap(){
    //Map contains {key,Values} pair both can be of any data type
    //keys must be unique 
    //Maps are sorted 

    map < int, int > mp;
    for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << (*it).first << "\t" << (*it).second << endl;
    
  }

}

int main(){
    explainmap();
    return 0;

}