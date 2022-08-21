#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows, cols;
    cin>>rows>>cols;
    bool flag = true;
    int count = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
                if(flag == true && i % 2 == 1 && j != cols - 1 ){
                    cout<<".";
                    count++;
                }
                else if(flag == false && i % 2 == 1 && j != 0 ){
                    cout<<".";
                    count++;
                }
                else{
                    cout<<"#";
                }
        }
        if(count >= 1 && flag == true){
            count = 0;
            flag = false;
        }else if(count >= 1 && flag == false) {
            count = 0;
            flag = true;
        }
        cout<<endl;
    }






    return 0;
}
