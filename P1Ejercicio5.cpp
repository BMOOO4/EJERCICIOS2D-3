#include <iostream>
using namespace std;

int main(){
	string dia;
	cout<<"Ingrese un dia de la semana: ";
	cin>> dia;
	if(dia =="sábado" or dia =="Sábado" or dia =="SÁBADO"){
		cout<<"Feliz fin de semana"<<endl;
	}else if(dia =="domingo" or dia =="Domingo" or dia =="DOMINGO"){
		cout<<"Feliz descanso";
	}else{
		cout<<"No es válido";
	}
}
