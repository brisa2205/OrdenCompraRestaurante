#ifndef Credito_H
#define Credito_H
#include <string.h>

class Credito: public MetodoPago{
	private:
		string numero;
		string banco;
		string tipo;
		string fecha_vencimiento;
	public: 
		Credito(string direccion, string ciudad, string telefono, string numero, string banco, string tipo, string fecha_vencimiento): MetodoPago(direccion,ciudad,telefono){
			this->banco = banco;
			this->numero = numero;
			this->tipo = tipo;
			this->fecha_vencimiento = fecha_vencimiento;
			}
		void mostrarDatos(){
            MetodoPago::mostrarDatos();
            cout << "Nombre del Banco: " << banco << endl;
            cout << "Numero de Cuenta: " << numero<< endl;
        }
};

#endif // Credito_H