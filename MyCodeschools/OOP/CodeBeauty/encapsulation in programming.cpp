#include<iostream>
#include<string>
#include<list>
using namespace std;

class YoutubeChannel{
    private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublichedVideoTitles;

    public:
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

    void Subscribe(){
        SubscribersCount++;
    }

    void UnSubscribe(){
        if(SubscribersCount > 0)
        SubscribersCount--;
    }

    void PublishVideo(string title){
        PublichedVideoTitles.push_back(title);
    }
};
int main(){
    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishVideo("C++ for Beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");

    //YoutubeChannel ytChannel2("AmySing", "Amy");
   // ytChannel.Subscribe();
    //ytChannel.Subscribe();
   // ytChannel.Subscribe();
    ytChannel.UnSubscribe();

    ytChannel.getInfo();








return 0;
}


