#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfels"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    cout<<myDictionary.size()<<endl;

    for(auto pair: myDictionary){
        cout<< pair.first <<" - "<<pair.second<<endl;
    }
    cout<<endl;

    cout<<"After clear."<<endl;
    myDictionary.clear();
    cout<<"Size : "<<myDictionary.size()<<endl;



    return 0;
}


