#include<iostream>
#include<map>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfels"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    for(auto pair: myDictionary){
        cout<< pair.first <<" - "<<pair.second<<endl;
    }
    cout<<endl;

    unordered_map<string, string> myDictionary2;

    myDictionary2.insert(pair<string, string>("banana", "die Banane"));
    myDictionary2.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary2.insert(pair<string, string>("strawberry", "die Erdbeere"));
    myDictionary2.insert(pair<string, string>("orange", "die Orange, die Apfels"));

    for(auto pair: myDictionary2){
        cout<< pair.first <<" - "<<pair.second<<endl;
    }

    return 0;
}
