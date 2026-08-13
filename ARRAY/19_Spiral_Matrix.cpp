#include<iostream>
using namespace std;
vector<int> spiral(vector<vector<int>> &matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int top=0,right=m-1;
    int bottom=n-1,left=0;
    vector<int>ans;
    while(left<=right &&top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }bottom--;
        }

        if(left<=right){
            
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }left++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix(6,vector<int>(6));
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int>ans=spiral(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}