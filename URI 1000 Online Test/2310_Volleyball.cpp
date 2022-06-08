#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    double num;
    double Totalservice = 0, Totalblocks = 0, Totalattempts = 0;
    double playerService = 0, playerBlocks = 0, playerAttempts = 0;
    cin>>n;
    while(n--){
            string str;
            cin>>str;
            double a,b,c,d,e,f;
        cin>>a>>b>>c;
        Totalservice += a;
        Totalblocks += b;
        Totalattempts += c;

        cin>>d>>e>>f;
        playerService += d;
        playerBlocks += e;
        playerAttempts += f;
    }

    cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<(playerService/Totalservice) * 100<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<(playerBlocks/Totalblocks) * 100<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<(playerAttempts/Totalattempts) * 100<<" %."<<endl;

return 0;
}
