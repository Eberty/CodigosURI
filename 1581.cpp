#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    string str;
    cin >> n;
    while (n--) {
        map<string,int> resp;
		cin >> k;
		for (int i=0; i<k; i++){
			cin >> str;
			resp[str]++;
		}
		if (resp.size() == 1)
			cout << str << endl;
		else
			cout << "ingles" << endl;
    }
    return 0;
}
