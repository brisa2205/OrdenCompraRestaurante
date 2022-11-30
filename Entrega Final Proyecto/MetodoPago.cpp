#include "MetodoPago.h"
#include "Credito.h"
#include "Efectivo.h"
#include<string.h>

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