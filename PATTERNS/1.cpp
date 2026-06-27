#include <iostream>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)

{
    for (int i = 0; i < n; i++)
    {
        //space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for (int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n ){
    for (int i = 0; i < n; i++)
    {
        //space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for (int k=0;k<2*(n-i-1)+1;k++){
            cout<<"*";
        }
        //space
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for (int i=1;i<=2*n-1;i++){
       int stars=i;
       if (i>n) stars=2*n-i  ;
       for(int j=0;j<stars;j++){
        cout<<"*";
       }
    cout<<endl;
    }

}
void pattern6(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2!=0) start = 0;
        for (int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern7(int n){
//int val=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
            
        }
        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern8(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=1;i<=n;i++){
        for (char ch='A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //Alpha
        char ch='A';
        int bp=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=bp) ch++;
            else ch--;
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern13(int n){  
    char ch='A';
    for(int i=0;i<n;i++){
        char start = ch+n-i-1;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
for(int i=0;i<n;i++){
    //star
    for (int j=0;j<n-i;j++){
        cout<<"*";
    }
    //space
    for(int j=0;j<2*i;j++){
        cout<<" ";
    }
    //star
    for (int j=0;j<n-i;j++){
        cout<<"*";
}
cout<<endl;
}
for(int i=1;i<=n;i++){
    //stars
    for (int j=0;j<i;j++){
        cout<<"*";
    }
    //spaces
    for(int j=0;j<2*(n-i);j++){
        cout<<" ";
    }
    //stars
    for (int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
int main()
{
    int n;
    cin>>n;
    pattern14(n);
    return 0;
}
