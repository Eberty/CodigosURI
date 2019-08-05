#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    map<string, string> map;
    map["brasil"] = "Feliz Natal!";
    map["alemanha"] = "Frohliche Weihnachten!";
    map["austria"] = "Frohe Weihnacht!";
    map["coreia"] = "Chuk Sung Tan!";
    map["espanha"] = "Feliz Navidad!";
    map["grecia"] = "Kala Christougena!";
    map["estados-unidos"] = "Merry Christmas!";
    map["inglaterra"] = "Merry Christmas!";
    map["australia"] = "Merry Christmas!";
    map["portugal"] = "Feliz Natal!";
    map["suecia"] = "God Jul!";
    map["turquia"] = "Mutlu Noeller";
    map["argentina"] = "Feliz Navidad!";
    map["chile"] = "Feliz Navidad!";
    map["mexico"] = "Feliz Navidad!";
    map["antardida"] = "Merry Christmas!";
    map["canada"] = "Merry Christmas!";
    map["irlanda"] = "Nollaig Shona Dhuit!";
    map["belgica"] = "Zalig Kerstfeest!";
    map["italia"] = "Buon Natale!";
    map["libia"] = "Buon Natale!";
    map["siria"] = "Milad Mubarak!";
    map["marrocos"] = "Milad Mubarak!";
    map["japao"] = "Merii Kurisumasu!";

    while(cin >> str) {
        if (map.count(str) > 0)
            cout << map[str] << endl;
        else
            cout << "--- NOT FOUND ---" << endl;
    }
    return 0;
}
