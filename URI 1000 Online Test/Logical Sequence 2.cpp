#include<iostream>
using namespace std;
int main()
{
//    freopen("out.txt", "w", stdout);
    int row,col,i,j,n;
    cin>>row>>col;

    for (i=1;i<=col;i++)
    {
//        if (i < col && (i % row != 1)) {
//            cout << " ";
//        }
        cout << i;
        if (i % row == 0) {
            cout << endl;
        }
        else if (i < col) {
            cout << " ";
        }
    }


    return 0;
}
