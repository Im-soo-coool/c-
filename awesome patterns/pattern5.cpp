//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"enter rows to make half pyramid 180 rotation"<<endl;
    cin>>row;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            if(j < row-i-1)
                cout<<"  ";

                else
                cout<< "* ";           
        }
        cout<<endl;
    }
}