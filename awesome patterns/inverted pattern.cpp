// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;

    for(int i = row; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// another way just change  for loop
// for(int i = 1; i <= n; i++)
// for(int j = 1; j < n+1-i; j++)