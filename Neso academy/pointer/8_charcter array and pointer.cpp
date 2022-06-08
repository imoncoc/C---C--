#include<iostream>
using namespace std;
void print(char *C){
    while(*C != '\0'){
      cout<<*C;
      C++;
    }

}

int main(){
    char C[20] = "Hello";
    print(C);

    return 0;
}
