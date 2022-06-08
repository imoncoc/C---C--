#include<iostream>
#include<vector>
using namespace std;
int main(){
    // cplusplus check this webside
    vector<int> myVector;
    myVector.push_back (6);
    myVector.push_back (16);
    myVector.push_back (15);
    myVector.push_back (150);

    for(int i = 0; i < myVector.size(); i++){
        cout<<myVector[i]<<endl;
    }

  cout<<"MyVector Size: "<<myVector.size()<<endl;
    return 0;
}
