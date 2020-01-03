#ifndef RED_H
#define RED_H
#include <string>
#include "Transporte.h"
#include "Enlace.h"

class Red{
	private:
		string mensaje;
	public:
		Red();
		void setMensaje(string mensaje);
		string getMensaje();
		void doProcess(Transporte transporte);
		void doProcess(Enlace enlace);	
	};
#endif
