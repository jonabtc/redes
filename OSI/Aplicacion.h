#ifndef APLICACION_H
#define APLICACION_H
#include <string>
#include "Presentacion.h"

using namespace std;

class Aplicacion{
	private:
		string mensaje;
	public:
		Aplicacion();
		void setMensaje(string s);
		string getMensaje();
		void doProcess();
		void doProcess(Presentacion presentacion);	
	};
#endif
