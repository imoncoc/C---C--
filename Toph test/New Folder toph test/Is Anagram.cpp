#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num,nn,count=0;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
    int t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    char ch[100];
    cin>>ch;
    cout<<ch;
    nn=strlen(ch);

    for (i=1;i<=nn;i++)

    {
            switch(ch[i])
    {
        case 'a':
            a++;
            cout<<"A = "<<a<<endl;
            break;
        case 'b':
            b++;
            cout<<"B = "<<b<<endl;
            break;
        case 'c':
             c++;
             cout<<"C = "<<c<<endl;
             break;
        case 'd':
            d++;
            cout<<"D = "<<d<<endl;
            break;
        case 'e':
            e++;
            cout<<"E = "<<e<<endl;
            break;
        case 'f':
            f++;
            cout<<"F = "<<f<<endl;
            break;
        case 'g':
            g++;
            cout<<"G = "<<g<<endl;
            break;
        case 'h':
            h++;
            cout<<"H = "<<h<<endl;
            break;
        case 'i':
            i++;
            cout<<"I = "<<i<<endl;
            break;
        case 'j':
            j++;
            cout<<"J = "<<j<<endl;
            break;
        case 'k':
            k++;
            cout<<"K = "<<k<<endl;
            break;
        case 'l':
            l++;
            cout<<"L = "<<l<<endl;
            break;
        case 'm':
            m++;
            cout<<"M = "<<m<<endl;
            break;
        case 'n':
            n++;
            cout<<"N = "<<n<<endl;
            break;
        case 'o':
            o++;
            cout<<"O = "<<o<<endl;
            break;
        case 'p':
            p++;
            cout<<"P = "<<p<<endl;
            break;
        case 'q':
            q++;
            cout<<"Q = "<<q<<endl;
            break;
        case 'r':
            r++;
            cout<<"R = "<<r<<endl;
            break;
        case 's':
            s++;
            cout<<"S = "<<s<<endl;
            break;
        case 't':
            t++;
            cout<<"T = "<<t<<endl;
            break;
        case 'u':
            u++;
            cout<<"U = "<<u<<endl;
            break;
        case 'v':
            v++;
            cout<<"V = "<<v<<endl;
            break;
        case 'w':
            w++;
            cout<<"W = "<<w<<endl;
            break;
        case 'x':
            x++;
            cout<<"X = "<<x<<endl;
            break;
        case 'y':
            y++;
            cout<<"Y = "<<y<<endl;
            break;
        case 'z':
            z++;
            cout<<"Z = "<<z<<endl;
            break;

      // default:
           // cout<<nn<<endl;
    }



    }



    return 0;
}
