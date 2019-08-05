#include<bits/stdc++.h>

using namespace std;

int main(){
	int d, vf, vg;
	float hip;
	while(cin >> d >> vf >> vg){

		hip = sqrt(d*d + 144);
				            
		if(hip / vg <= 12.0 / vf)
			cout << "S" << endl;
		else 
			cout << "N" << endl;
	}

	return 0;
}
