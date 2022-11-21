#include <iostream>
#include "Cliente.cpp"
#include "Menu.cpp"

int main(){
	string nombre;
	string telefono;
	int opcion = 0;
	int input;
	Cliente p1 = Cliente();
	p1.registrar();
	p1.imprimirdatos();
	system("pause");
	
	Menu m1=Menu();
	do{
		opcion =  m1.desplegarMenu();
		m1.imprimirdatos(opcion);
		//m1.buscardisponibilidad();
		cout<<opcion;
		cout<<"Seleccione 1 para agregar otro platillo: ";
		cin>>input;
	}while(input != 2);
	
	return 0;
}
