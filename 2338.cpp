#include <bits/stdc++.h>

using namespace std;

int main() {
	string aux[] = {"=.===","===.=.=.=","===.=.===.=","===.=.=","=","=.=.===.=","===.===.=",
					"=.=.=.=","=.=","=.===.===.===","===.=.===","=.===.=.=","===.===","===.=",
					"===.===.===","=.===.===.=","===.===.=.===","=.===.=","=.=.=","===","=.=.===",
					"=.=.=.===","=.===.===","===.=.=.===","===.=.===.===","===.===.=.="};
	string tmp, str;
	int t, fim;
	
	cin >> t;
	while (t--){
		cin >> str;
		while(str.size() > 0){
			fim = str.find("...");
			if (fim == -1)
				fim = str.size();
			tmp = str.substr(0, fim);
			
			for (int i=0; i<26; i++){
				if (aux[i] == tmp)
					printf("%c", i+'a');
			}
			
			if ((int)str.find(".......") == fim && fim != -1) {
				printf(" ");
				str.erase (0, fim+7);
			} else {
				str.erase (0, fim+3);
			}
		}
		cout << endl;
	}
	return 0;
}
