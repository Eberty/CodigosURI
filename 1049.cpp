#include <iostream>
#include <string>

using namespace std;

int main() {
	string p1, p2, p3;
	
	cin >> p1 >> p2 >> p3;
	if (p1.compare("vertebrado") == 0){
		if (p2.compare("ave") == 0){
			if (p3.compare("carnivoro") == 0){
				cout << "aguia" << endl;
			}else{
				cout << "pomba" << endl;
			}
		}else{
			if (p3.compare("onivoro") == 0){
				cout << "homem" << endl;
			}else{
				cout << "vaca" << endl;
			}
		}
	}else{
		if (p2.compare("inseto") == 0){
			if (p3.compare("hematofago") == 0){
				cout << "pulga" << endl;
			}else{
				cout << "lagarta" << endl;
			}
		}else{
			if (p3.compare("hematofago") == 0){
				cout << "sanguessuga" << endl;
			}else{
				cout << "minhoca" << endl;
			}
		}
	}
	
    return 0;
}
