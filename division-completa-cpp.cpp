#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num1, num2, divr, residuo,div, residuod;
	cout<<"Digite los 2 numeros a dividir: "<<endl;
	cin>>num1;
	cin>>num2;
	divr=num1/num2;
	div=(int)num1/(int)num2;
	residuo=(int)num1 % (int)num2;
	residuod=divr-div;
	cout<<"========================================================"<<endl;
	cout<<"La division real es: "<<divr<<endl;
	cout<<"La division con resultado entero es: "<<div<<endl;
	cout<<"El modulo es : "<<residuo<<endl;
	cout<<"El residuo de los decimales es: "<<residuod;
	return 0;
}

