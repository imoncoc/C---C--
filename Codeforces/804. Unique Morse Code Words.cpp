#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> words = {"gin","zen","gig","msg"};
    vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
    ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    cout<<"words size: "<<words.size()<<endl;
    unordered_set<string> gen_codes;

    for(int i = 0; i < words.size(); i++) {
        string code = "";
        for(int j = 0; j < words[i].size(); j++){
            code += morse_code[words[i][j] - 'a'];
            cout<<"morse_code: "<<morse_code[words[i][j] - 'a']<<endl;
        }

            cout<<"code: "<<code<<endl;
        gen_codes.insert(code);
    }


    cout<<gen_codes.size()<<endl;


    return 0;
}
