#include "Cliente.h"

//constrctor
Cliente::Cliente(){
		nombre = " ";		
		apellido = " ";
 		telefono = " ";
}
void Cliente::registrar(){
	cout<<"Ingrese nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingresa Telefono: "<<endl;
	cin>>telefono;
}
void Cliente::elegirpedido(){
	 cout<<"Selecciona paquete"<<nombre<<apellido<<endl;
}
void Cliente::pagar(){
	cout<<"cuanto vas a pagar"<<nombre;
}
void Cliente::imprimirdatos(){
	cout<<"Su nombre es: "<<nombre<<endl;
	cout<<"Su telefono es: "<<telefono<<endl;
}
