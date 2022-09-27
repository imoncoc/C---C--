#include<bits/stdc++.h>
using namespace std;
int main(){
    string dominoes = ".L.R...LR..L..";
    //string dominoes = "..R..";
    int n = dominoes.size();
    vector<int> right(n, 0), left(n, 0);
    bool flag = false;
    int count = 1;
    string res = "";

    for(int i = 0; i < n; i++){
        if(dominoes[i] == 'R'){
            flag = true;
            count = 1;
        }
        else if(dominoes[i] == 'L'){
            flag = false;
            count = 1;
        }
        else if(flag == true && dominoes[i] == '.'){
            right[i] = count++;
        }
    }

    flag = false, count = 1;
    cout<<"acual: ";
    for(int i = n-1; i >= 0; i--){
            cout<<dominoes[i]<<" ";
        if(dominoes[i] == 'L'){
            flag = true;
            count = 1;
        }
        else if(dominoes[i] == 'R'){
            flag = false;
            count = 1;
        }
        else if(flag == true && dominoes[i] == '.'){
            left[i] = count++;
        }
    }

    cout<<endl<<"leftt: ";
    for(int i = 0; i< n; i++){
        cout<<left[i]<<" ";
    }

    cout<<endl<<"Right: ";
    for(int i = 0; i< n; i++){
        cout<<right[i]<<" ";
    }

    for (int i = 0; i < n; i++) {
            if (!left[i] && !right[i]) res += dominoes[i];
            else if (!left[i]) res += 'R';
            else if (!right[i]) res += 'L';
            else if (left[i] == right[i]) res += '.';
            else if (left[i] < right[i]) res += 'L';
            else res += 'R';
        }

       cout<<endl;
       cout<<"resss: ";
       for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
       }







    return 0;
}

