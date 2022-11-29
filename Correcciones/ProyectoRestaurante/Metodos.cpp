#include "Clases.h"
#include <string.h>

using namespace std;

Cliente::Cliente(string _nombre, string _telefono, string _direccion){
    nombre = _nombre;
    telefono = _telefono;
    direccion = _direccion;
}

void Cliente::setNombre(string _nombre){
    nombre = _nombre;
}

void Cliente::setTelefono(string _telefono){
    telefono = _telefono;
}

void Cliente::setDireccion(string _direccion){
    direccion = _direccion;
}

string Cliente::getNombre(){
    return nombre;
}

string Cliente::getTelefono(){
    return telefono;
}

string Cliente::getDireccion(){
    return direccion;
}
void Menu1::getMenu(){
	cout<<"		[------------------------ Menu ------------------------]"<<endl;
	cout<<"	1) Enchiladas-pollo   	$75.00"<<endl;
	cout<<"	2) Tacos-pollo 		 	$75.00"<<endl;
	cout<<"	3) Tacos-queso 			$60.00"<<endl;
	cout<<"	4) Hamburgesa 			$85.00"<<endl;
	cout<<"	5) Pizza 	 			$50.00"<<endl;
}
void Menu1::preparar(int opcion){
	if(opcion == 1){
		cout<<"Prepara tus enchiladas: "<<endl;
		cout<<"1) Si	2) No";
		cout<<"Crema: ";
	}
}
void Postre::getPostre(){
	cout<<"		[------------------------ Postres ------------------------]"<<endl;
	cout<<"	1) Helado			 	  	$35.00"<<endl;
	cout<<"	2) Platanos fritos 		 	$25.00"<<endl;
	cout<<"	3) Pay de Limon 			$20.00"<<endl;
	cout<<"	4) Fresa con crema			$25.00"<<endl;
	cout<<"	5) Pastel	 	 			$30.00"<<endl;
}
MetodoPago::MetodoPago(string _direccion, string _ciudad, string _telefono){
	direccion = _direccion;
	ciudad = _ciudad;
	telefono = _telefono;
}
void MetodoPago::mostrarDatos(){
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Ciudad: "<<ciudad<<endl;
	cout<<"Telefono: "<<telefono<<endl;
}
float MetodoPago::pagar(int opcion){
	if(opcion == 1){
		return 75.00;
	}
	else if(opcion == 2){
		return 75.00;
	}
	else if(opcion == 3){
		return 60.00;
	}	
	else if(opcion == 4){
		return 85.00;
	}
	else if(opcion == 5){
		return 50.00;
	}
	else{
		return 0;
	}
}