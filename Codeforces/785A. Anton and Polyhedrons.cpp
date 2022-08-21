#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int Tetrahedron = 4, Cube = 6, Octahedron = 8, Dodecahedron = 12, Icosahedron = 20;
    string str[] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron" };
    int arr[] = {4, 6, 8, 12, 20};
    int sum = 0;


    while(n--){
        string target;
        cin>>target;

        for(int i = 0; i < 5; i++){
            if(str[i] == target){
                sum += arr[i];
                break;
            }
        }
    }

    cout<<sum<<endl;








    return 0;
}
