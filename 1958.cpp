#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double x;
	cin >> x;
	cout << scientific << setprecision(4) << showpos << uppercase << x << endl;
	return 0;
}

/*cout -> pra printar na tela
setprecision -> pra arrendondar o número de casas certo
showpos -> vai imprimir o sinal de + ou - dependendo do input (cobre os casos de -0 e 0)
uppercase -> pro e ficar maiusculo
x -> o número em si
endl -> quebra de linha */
