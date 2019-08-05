#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    while (getline(cin, str)) {
        char c = tolower(str[0]);
        int ali = 0;
        bool same = false;
        for (size_t i=1; i<str.size(); i++) {
            if (str[i-1] == ' ') {
                if(tolower(str[i]) == c)
                    same = true;
                else {
                    if (same)
                        ali++;
                    same = false;
                    c = tolower(str[i]);
                }
            }
        }
        if (same)
            ali++;
        cout << ali << endl;
    }
    return 0;
}
