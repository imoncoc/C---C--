#include<iostream>
using namespace std;
int main(){
    int increment[12] = { 1, -2, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1 };

   int day, month;
   while(cin>>month>>day){
    if(month == 12){
        if(day == 25){
            cout<<"E natal!"<<endl;
        }
        if(day == 24){
            cout<<"E vespera de natal!"<<endl;
        }
        if(day > 25){
            cout<<"Ja passou!"<<endl;
        }
        if( day < 24){
            //Faltam 31 dias para o natal!
            cout<<"Faltam "<<day - 25<<" dias para o natal!"<<endl;
        }
    }
    else{
            int days;
            switch (month)
    {
        case 1: days = 0;
        break;
        case 2: days = 31;
        break;
        case 3: days = 60;
        break;
        case 4: days = 91;      //number of days elapsed before April in a non-leap year
        break;
        case 5: days = 121;
        break;
        case 6: days = 152;
        break;
        case 7: days = 182;
        break;
        case 8: days = 213;
        break;
        case 9: days = 244;
        break;
        case 10:days = 274;
        break;
        case 11:days = 305;
        break;
        case 12:days = 335;
        break;
    }
        cout<<"Faltam "<<360 - (days + day)<<" dias para o natal!"<<endl;
    }
   }




return 0;
}
