#include<iostream>
#include<string>
#include<list>
using namespace std;

class YoutubeChannel{
    public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublichedVideoTitles;
};
int main(){
    YoutubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublichedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

    cout<<"Name: "<<ytChannel.Name<<endl;
    cout<<"OwnerName: "<<ytChannel.OwnerName<<endl;
    cout<<"SubscribersCount: "<<ytChannel.SubscribersCount<<endl;

    cout<<"Videos: "<<endl;
    for(string VideoTitle: ytChannel.PublichedVideoTitles){
        cout<<VideoTitle<<endl;
    }




return 0;
}
