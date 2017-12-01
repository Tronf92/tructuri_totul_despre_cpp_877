#include <iostream>
using namespace std;

struct msj{
	char primul[256];
	void arata_titlu(int valoare){
		cout << primul << valoare << "Sectiuni C/C++";
	}
};

void main(){
	struct msj carte={ "Aceasta carte are " };
	carte.arata_titlu(1500);

	system("pause");
}