#include<iostream>
using namespace std;
void prime(int n){
    int cnt=0;
   for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            if(n/i!=i){
               cnt++; 
            }
        }
    } 
    
    if (cnt==2) cout<<"Prime";
    else cout<<"Not prime ";

}
int main(){
    int n;
    cin>>n;
    prime(n);
}