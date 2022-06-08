#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10];
    char str[2], str2[2];

    cin.sync();
    cin>>str;

    int n, m, x, y;
    int line[] = {'a','b','c','d','e','f', 'g','h'};
    int numbers[] = {49, 50, 51, 52, 53, 54, 55, 56};
    int lineCore[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int numbersCore[] = {8, 7, 6, 5, 4, 3, 2, 1};

    for(int i = 0; i < 8; i++){
        if(str[0] == line[i]){
            m = lineCore[i];
        }

        if(str[1] == numbers[i]){
            n = numbersCore[i];
        }
    }
    //cout<<"N = "<<n<<", M = "<<m<<endl;

     cin.sync();
     cin>>str2;


    for(int i = 0; i < 8; i++){
        if(str2[0] == line[i] ){
           y = lineCore[i];
        }

        if(str2[1] == numbers[i] ){
           x = numbersCore[i];
        }
    }



   // cout<<"X = "<<x<<", Y = "<<y<<endl;


    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
                if(i == n && j == m){
                   arr[i][j] = 1;
                }
                else if( (i == n - 2 && j == m - 1) || (i == n - 2 && j == m + 1)
                         || (i == n - 1 && j == m - 2) || (i == n - 1 && j == m + 2)
                        || (i == n + 1 && j == m - 2) || (i == n + 1 && j == m + 2)
                        || (i == n + 2 && j == m - 1) || (i == n + 2 && j == m + 1) ){

                    arr[i][j] = 2;
                }

                else{
                   arr[i][j] = 0;
                }
        }
    }

  /*  for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/

    if(arr[x][y] == 2){
        cout<<"VALIDO"<<endl;
    }
    else{
        cout<<"INVALIDO"<<endl;
    }



    return 0;
}
