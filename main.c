#include "MKL25Z4.h"
#include "LIBRERIA.h"
#include "Delay.h"
#define ledROJO 5
#define ledVERDE 6
#define pinPULSADOR 3
int main{
    void ConfigMx()
    int lecturaPUL(pinPULSADOR)
    if(lecturaMx()==0){
        void conLED(1, ledVERDE);
        void conLED(0, ledROJO);
        void contadorASC();
    } elseif(lecturaMx()==1){
       void conLED(0, ledVERDE);
       void conLED(1, ledROJO);
       void contadorDES();
    }

}