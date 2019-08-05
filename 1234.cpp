#include <iostream>

using namespace std;

int main (int c, char **args){
    string b;
    bool low = false;

    while(getline(cin,b)){
        low = false;
        for (int i=0; b[i] != '\0'; i++)
            if ((b[i] >= 'A' && b[i] <= 'Z') || (b[i] >= 'a' && b[i] <= 'z')){
                if(low)
                    cout << (char)(b[i] | 0x20);
                else
                    cout << (char)(b[i] & 0xDF);
                low = !low;
            } else
                cout << b[i];
        cout << endl;
    }
    return 0;
}
