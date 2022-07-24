// 1
// 22
// 333
// 4444
// 55555


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"enter rows to make half pyramid"<<endl;
    cin>>row;

    for(int i = 1; i <= row; i++){
        for(int j = 0; j < i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}