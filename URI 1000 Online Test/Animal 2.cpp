#include <iostream>

using namespace std;

int main() {

    string data[8][2];

    data[0][0] = "vertebrado ave carnivoro";
    data[0][1] = "aguia";

    data[1][0] = "vertebrado ave onivoro";
    data[1][1] = "pomba";

    data[2][0] = "vertebrado mamifero onivoro";
    data[2][1] = "homem";

    data[3][0] = "vertebrado mamifero herbivoro";
    data[3][1] = "vaca";




    data[4][0] = "invertebrado inseto hematofago";
    data[4][1] = "pulga";

    data[5][0] = "invertebrado inseto herbivoro";
    data[5][1] = "lagarta";

    data[6][0] = "invertebrado anelideo hematofago";
    data[6][1] = "sanguessuga";

    data[7][0] = "invertebrado anelideo onivoro";
    data[7][1] = "minhoca";


    string key1, key2, key3, completeKey = "";

    cin >> key1 >> key2 >> key3;

    completeKey = key1 + " " + key2 + " " + key3;

    for (int i = 0; i < 8; ++i) {
        if (completeKey == data[i][0]) {
            cout << data[i][1] << endl;
            break;
        }
    }

    return (0);
}
