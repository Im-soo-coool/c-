#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cout<<"enter desirable rows and columns"<<endl;
    cin>>rows>>columns;
    for(int rows = 0; rows < 5; rows++){
        for(int columns = 0; columns < 4; columns++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
