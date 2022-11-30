#ifndef Cliente_H_
#define Cliente_H_

#include <string>
using namespace std;

class Cliente{
 	private: //atributos
 		string nombre;
 		string apellido;
 		string telefono;
 		
 	public://metodos
 	    Cliente();
 	    void registrar();
 		void elegirpedido();
 		void pagar();
 	    void imprimirdatos();	
	};

#endif // Cliente_H_

