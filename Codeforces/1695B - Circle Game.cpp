#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
     cin>>n;
     int arr[n];
     for(int i = 0; i < n; i++){
        cin>>arr[i];
     }


    int mikeMin = INT_MAX, joeMin = INT_MAX;
    int ind1, ind2;

    for(int i = 0; i < n; i += 2){

            if(mikeMin > arr[i]){
            mikeMin = arr[i];
            ind1 = i;
        }


            if(joeMin > arr[i+1]){
                joeMin = arr[i+1];
                ind2 = i+1;
            }
    }

    //cout<<"mikeMin: "<<mikeMin<<endl;
    //cout<<"ind1: "<<ind1<<endl;
    //cout<<"joeMin: "<<joeMin<<endl;
    //cout<<"ind2: "<<ind2<<endl;

    if(n % 2 == 1) cout<<"Mike"<<endl;
    else{
        if(mikeMin == joeMin){
            if(ind1 < ind2) cout<<"Joe"<<endl;
            else cout<<"Mike"<<endl;
        }
        else if(mikeMin < joeMin) cout<<"Joe"<<endl;
        else cout<<"Mike"<<endl;
    }



    }



    return 0;
}
