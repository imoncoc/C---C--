#include<iostream>
#include<string>
#include<list>
using namespace std;

class YoutubeChannel{
    private:
    string Name;
    int SubscribersCount;
    list<string> PublichedVideoTitles;

    protected:
        string OwnerName;
        int ContentQuality;

    public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
        ContentQuality++;
    }

    void CheckAnalytices(){
        if(ContentQuality < 5){
            cout<<Name<<" has bad quality content"<<endl;
        }else{
             cout<<Name<<" has great content"<<endl;
        }

        }

};

class CookingYoutubeChannel: public YoutubeChannel{
public:
    CookingYoutubeChannel(string name, string OwnerName): YoutubeChannel(name, OwnerName){
    }

    void Practice(){
        cout<<OwnerName<<" is practicing cooking, learning new recipes, experimenting with spice..."<<endl;
        ContentQuality++;
    }

};

class SingerYoutubeChannel: public YoutubeChannel{
public:
    SingerYoutubeChannel(string name, string OwnerName): YoutubeChannel(name, OwnerName){
    }

    void Practice(){
        cout<<OwnerName<<" is taking singing classes, learning new songs, learning how to dance..."<<endl;
    }

};

int main(){
    CookingYoutubeChannel CookingYtChannel("Amy's Kitchen", "amy");
    SingerYoutubeChannel SingerYtChannel("JohnSings", "John");

    CookingYtChannel.Practice();
    SingerYtChannel.Practice();



return 0;
}



