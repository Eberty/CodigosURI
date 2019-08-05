#include <list>
#include <iostream>

using namespace std;

int main(int argc, char *args[]){
	list<string> yes, no;
	list<string>::iterator i;
	string s;
	int amigo = 0;
	
	getline (cin, s);
	while (s.find("FIM") == string::npos){
		if (s.find("NO") == string::npos)
			yes.push_back(s.substr(0, s.find("YES")-1));
		else
			no.push_back(s.substr(0, s.find("NO")-1));
		getline(cin, s);
	}
	
	for (i=yes.begin(); i!=yes.end(); i++){
		if(amigo < i->size()){
			amigo = i->size();
			s=*i;
		} 
	}

	yes.sort();
	yes.unique();
	no.sort();
	no.unique();
		
	for (i=yes.begin(); i!=yes.end(); i++)
		cout  << *i << endl;
	for (i=no.begin(); i!=no.end(); i++)
		cout  << *i << endl;

	cout << endl << "Amigo do Habay:" << endl << s << endl;

	return 0;
}
