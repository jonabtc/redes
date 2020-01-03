#ifndef SESION_H
#define SESION_h
#include <string>
#include "Presentacion.h"
#include "Transporte.h"

class Sesion{
	private:
		string mensaje;
	public:
		Sesion();
		void setMensaje(string s);
		string getMensaje();
		void doProcess(Presentacion presentacion);
		void doProcess(Transporte transporte);	
	};
#endif
