
//     1
//    212
//   32123
//  4321234
// 543212345
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n-1; k >= i; k--)
        {
            cout << "  ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << j<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout << j<<" ";
        }
        cout << endl;
    }
}