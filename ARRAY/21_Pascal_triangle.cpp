#include<iostream>
using namespace std;
vector<int> genraterow(int row){
    long long ans=1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;

}
vector<vector<int>>pascal(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(genraterow(i));
    }
    return ans;
}
int main(){
    vector<vector<int>> ans = pascal(4);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}