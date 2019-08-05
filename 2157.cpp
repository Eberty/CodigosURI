#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, e;
    cin >> n;
    
    while (n--) {
        string str;
		cin >> b >> e;
		for (int i=b; i<=e; i++)
			str += to_string(i);
		cout << str;
		for (int i = str.size()-1; i>=0; i--)
			printf("%c", str.at(i));
		cout << endl;
    }
    
    return 0;
}
