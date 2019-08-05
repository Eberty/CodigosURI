#include<bits/stdc++.h>

using namespace std;

int main(){
	int pes = 0, car = 0, aux;
	string pal;

	cin >> pal;
	while(pal != "ABEND"){
		cin >> aux;

		if(pal == "SALIDA"){
			pes += aux;
			car++;
		}else{
			pes -= aux;
			car--;
		}

		cin >> pal;
	}

	cout << pes << endl << car << endl;

	return 0;
}
