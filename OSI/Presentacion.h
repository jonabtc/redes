#ifndef PRESENTACION_H
#define PRESENTACION_H
#include <string>
#include "Aplicacion.h"
#include "Sesion.h"

class Presentacion{
	private:
		string mensaje;
	public:
		Presentacion();
		void setMensaje(string s);
		string getMensaje();
		void doProcess(Aplicacion aplicacion);
		void doProcess(Sesion sesion);	
	};
#endif
