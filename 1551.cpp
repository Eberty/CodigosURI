#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string str;

    cin >> n;
    cin.ignore();
    while (n--) {
        vector<int> vet(26);
        getline(cin, str);
        for(size_t i=0; i<str.size(); i++) {
            if (str.at(i)>='a' && str.at(i)<='z')
                vet.at(str.at(i) - 'a')++;
        }
        int num = 0;
        for (auto x: vet)
			if(x)
				num++;
		if (num<13)
			cout << "frase mal elaborada" << endl;
		else if(num<26)
			cout << "frase quase completa" << endl;
		else if(num==26)
			cout << "frase completa" << endl;
    }
    return 0;
}
