#include<iostream>
using namespace std;
void rotate(vector<vector<int>> &matrix,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
}

}

int main(){
    vector<vector<int>> matrix(4, vector<int>(4));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    rotate(matrix,4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}