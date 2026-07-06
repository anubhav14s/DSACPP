#include <iostream>
using namespace std;
vector<int> intersection(vector<int> &n1, vector<int> &n2)
{
    vector<int> inter;
    int s1 = n1.size(), s2 = n2.size();
    int i = 0, j = 0;
    while (i < s1 && j < s2)
    {
        if (n1[i] < n2[j])
        {
            i++;
        }
        else if (n1[i] > n2[j])
        {
            j++;
        }
        else
        {
            inter.push_back(n1[i]);
            j++;
            i++;
        }
    }
    return inter;
}
int main()
{
    vector<int> n1{1,2,2,3,4,5,5,6};
    vector<int> n2{2,2,3,5,6,6,7};
    vector<int> ans = intersection(n1, n2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}