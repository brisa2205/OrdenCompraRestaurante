#include <iostream>
#include<string.h>
#include "Metodos.cpp"

using namespace std;
int main(){
	int opcion = 0;
	int dinero = 0;
	int postre = 0;
	string nombre, telefono,direccion, ciudad, no, banco,tipo,fecha;
	Postre p1;
	Menu1 m1;
	//Presentación del restaurante:
	cout<<endl;
	cout<<"				------- BIENVENIDO A SABROSANO -----	"<<endl;
	cout<<"Buen dia ingresa tu datos por favor: "<<endl;
	cout<<"Nombre: ";cin>>nombre;
	cout<<"Telefono: ";cin>>telefono;
	cout<<"Direccion: ";cin>>direccion;
	cout<<endl;
	Cliente c1(nombre,telefono,direccion);
	
	fflush(stdin);
	m1.getMenu();
	cout<<"Por favor seleccione una opcion: ";cin>>opcion;
	cout<<endl;
	
	cout<<"Desea agregar un postre: ";
	cout<<"1) Si 	2) No"<<endl;
	cout<<"Seleccione una opcion: ";cin>>postre;
	//m1.getPostre();
	if(postre == 1){
		//m1.getPostre();
	}else{
		postre = 0;
	}
	fflush(stdin);
	cout<<endl;
	cout<<"Ingresa tus datos para pago: "<<endl;
	cout<<"Direccion: ";cin>>direccion;
	fflush(stdin);
	cout<<"Ciudad: ";cin>>ciudad;
	cout<<"Telefono: ";cin>>telefono;
	fflush(stdin);
	cout<<"Forma de pago: "<<endl;
	cout<<"	1) Efectivo"<<endl;
	cout<<"	2) Debito/Credito"<<endl;
	cout<<"Seleccione una opcion: ";cin>>dinero;
	cout<<endl;
	MetodoPago pago(direccion,ciudad,telefono);
	pago.mostrarDatos();
	
	float total;
	if(dinero == 2){
	total = pago.pagar(opcion);
	cout<<"Total a pagar: "<<total<<endl;
	cout<<endl;
	cout<<"Datos bancarios para pagar: "<<endl;
	cout<<"Ingresa no. cuenta: ";cin>>no;
	cout<<"Banco: ";cin>>banco;
	cout<<"Debito/Credito: ";cin>>tipo;
	cout<<"Fecha vencimiento: ";cin>>fecha;
	cout<<endl;
	cout<<"Los datos ingresados fueron: "<<endl;
	
		cout<<endl;
		Credito c(direccion,ciudad,telefono,no,banco,tipo,fecha);
		c.mostrarDatos();
		cout<<"Operacion exitosa! :)"<<endl;
	}else if(dinero == 1){
		cout<<endl;
		Efectivo e(direccion,ciudad,telefono);
		e.mostrarDatos();	
	}
	return 0;
}
