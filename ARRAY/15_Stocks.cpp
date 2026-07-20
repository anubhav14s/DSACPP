#include<iostream>
using namespace std;
int stocks(vector<int>&prices){
    int bp=prices[0],profit=0;
    for(int i=0;i<prices.size();i++){
        int sp = prices[i]-bp;
        profit=max(profit,sp);
        bp=min(prices[i],bp);
    }
    return profit; 
}
int main(){
    vector<int>stockprices={7,9,1,5,6,12,8};
    cout<<stocks(stockprices);
    return 0;
}