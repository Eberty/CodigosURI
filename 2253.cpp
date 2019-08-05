#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    while (getline(cin, str)) {
        bool val = true;
        if (str.size() < 6 || str.size() > 32) {
            val = false;
        } else {
            int lower=0, uper=0, num=0;
            for (size_t i=0; i<str.size(); i++) {
                if (!isalnum(str[i])) {
                    val = false;
                    break;
                }
                if (islower(str[i]))
                    lower++;
                else if (isupper(str[i]))
                    uper++;
                else if (isdigit(str[i]))
                    num++;
            }

            if (!lower || !uper || !num)
                val = false;
        }
        if (val)
            cout << "Senha valida." << endl;
        else
            cout << "Senha invalida." << endl;
    }

    return 0;
}
