#include<iostream>
using namespace std;
int main(){
    int n, number;

    while(cin>>n){
            int countTwo = 0, countThree = 0, countFour = 0, countFive = 0;
        for (int i = 0; i < n; i ++){
            cin>>number;

            if(number % 2 == 0) countTwo++;
            if(number % 3 == 0) countThree++;
            if(number % 4 == 0) countFour++;
            if(number % 5 == 0) countFive++;
        }

        cout<<countTwo<<" Multiplo(s) de 2"<<endl;
        cout<<countThree<<" Multiplo(s) de 3"<<endl;
        cout<<countFour<<" Multiplo(s) de 4"<<endl;
        cout<<countFive<<" Multiplo(s) de 5"<<endl;
    }



    return 0;
}
