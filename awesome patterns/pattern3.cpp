#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cout<<"enter rows to make inverted half pyramid"<<endl;
    cin>>rows;

    for(int j = rows-1; j >= 0; j--){
        for(int i = 0; i < j; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}\ 