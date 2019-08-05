#include <bits/stdc++.h>

using namespace std;

bool myFunc(string a, string b){
	return (a.size() > b.size());
}

int main() {
	int n, found;
	vector <string> vet;
	string str, str2;
	
	cin >> n;
	cin.ignore();
	while (n--){
		vet.clear();
		getline(cin, str);
		str += " ";
		while(str.size() > 0){
			str2 = "";
			found = str.find(' ');
			for (int i=0; i<found; i++)
				str2+=str[i];
			str.erase(str.begin(), str.begin()+found+1);
			vet.push_back(str2);
		}
		stable_sort(vet.begin(), vet.end(), myFunc);
		for (int i=0; i<vet.size(); i++){
			if (i!=0)
				cout << " ";
			cout << vet[i];
		}
		cout << endl;
	}
	
	return 0;
}
