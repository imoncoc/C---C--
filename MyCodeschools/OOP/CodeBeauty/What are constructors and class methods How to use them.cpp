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

    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    getInfo(){
        cout<<"Name: "<<Name<<endl;
    cout<<"OwnerName: "<<OwnerName<<endl;
    cout<<"SubscribersCount: "<<SubscribersCount<<endl;

    cout<<"Videos: "<<endl;
    for(string VideoTitle: PublichedVideoTitles){
        cout<<VideoTitle<<endl;
    }
    }
};
int main(){
    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublichedVideoTitles.push_back("C++ for Beginners");
    ytChannel.PublichedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublichedVideoTitles.push_back("C++ OOP");

    YoutubeChannel ytChannel2("AmySing", "Amy");

    ytChannel.getInfo();
    ytChannel2.getInfo();








return 0;
}

