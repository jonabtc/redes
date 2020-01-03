#ifndef ENLACE_H
#define ENLACE_H
#include <string>
#include "Red.h"
#include "Fisica.h"

using namespace std;
class Enlace{
        private:
                string mensaje;
        public:
                Enlace();
                void setMensate(string s);
                string getMensaje();
                void doProcess(Red red);
                void doProcess(Fisica fisica);
};
#endif
