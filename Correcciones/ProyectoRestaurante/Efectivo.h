#ifndef Efectivo_H
#define Efectivo_H
#include <string.h>

class Efectivo: public MetodoPago{
		public: 
		Efectivo(string direccion, string ciudad, string telefono): MetodoPago(direccion,ciudad,telefono){}
		void mostrarDatos(){
            MetodoPago::mostrarDatos();
            cout << "Favor de pagar en caja"<< endl;
            cout << "Muchas gracias por su compra :) Vuleva pronto"<< endl;
        }
};
#endif // Efectivo_H
