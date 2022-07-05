#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int rows, cols;
    cin>>rows>>cols;
    char st[rows][cols];

    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin>>st[i][j];
        }
    }

    int ind1 = -1, ind2 = -1, ans = 0, check = 0;

     for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(st[i][j] == 'R' && ans == 0){
                ind1 = i;
                ind2 = j;
                ans = 1;
            }
        }
    }



    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(st[i][j] == 'R' && ans == 0){
                ind1 = i;
                ind2 = j;
                ans = 1;
            }
        }
    }

    for(int i = 0; i < rows; i++){
        for (int j = 0; j < ind2; j++){
            if(st[i][j] == 'R' && check == 0){
                ind1 = i;
                ind2 = j;
                check = 1;
            }
        }
    }

    if(check == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }





    return 0;
}
