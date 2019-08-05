#include <iostream>

using namespace std;

int main() {
	float n1, n2, n3, n4, media, ex;
	cin >> n1 >> n2 >> n3 >> n4;
	media = (n1*2 + n2*3 + n3*4 + n4)/10.0;
	cout.precision(1);
	cout << fixed << "Media: " << media << endl;
	
	if (media >= 7)
		cout << "Aluno aprovado." << endl;
	else if (media < 5)
		cout << "Aluno reprovado." << endl;
	else{
		cout << "Aluno em exame." << endl;
		cin >> ex;
		cout << "Nota do exame: " << ex << endl;
		media = (media+ex)/2.0;
		if (media >= 5)
			cout << "Aluno aprovado." << endl;
		else
			cout << "Aluno reprovado." << endl;
		cout << "Media final: " << media << endl;
	}
		
    return 0;
}
