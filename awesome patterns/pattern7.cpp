// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, count = 1;
    cout<<"Enter how many rows: "<<endl;
    cin>>row;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}