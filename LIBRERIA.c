#include "LIBRERIA.h"
#include "MKL25Z4.h"
#include "Delay.h"
#define LOW 0u
#define HIGH 1u
uint8_t pinPUL;
uint8_t estadoLED;
uint8_t LED;
uint8_t estadoPUL;
int i, j, k;
int contadorA [4] [10] {
    {0, 0, 0, 0},
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 0, 1, 1},
    {0, 1, 0, 0},
    {0, 1, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 1, 1},
    {1, 0, 0, 0},
    {1, 0, 0, 1},
}

void ConfigMx(){
    SIM->SCGC5|= SIM_SCGC5_PORTA_MASK;
    PORTA->PCR[0]|= PORT_PCR_MUX(0);
    PORTA->PCR[1]|= PORT_PCR_MUX(0);
    PTA->PSOR|=(1u<<0);
    PTA->PSOR|=(0u<<1);
}

int lecturaPUL(pinPUL){
    PORTA->PCR[pinPUL]|= PORT_PCR_MUX(0);
    estadoPUL= PTA->PDIR&(1u<<pinPUL);
    if(estadoPUL==0){
        return 0;
    }
    else{
        return 1;
    }
}

int lecturaMx(){
    if(estadoPUL==0){
        return 0;
    } else{
        return 1;
    }
    
}

void conLED(uint8_t estadoLED, int LED){
    PORTA->PCR[LED]|= PORT_PCR_MUX(1);
    PTA->PSOR|=(estadoLED u<<LED);
}



void contadorASC(int i, int j, int k){
    for(i=0, i<4, i++){
        PORTA->PCR[contadorA[i][j]]|= PORT_PCR_MUX(1);
        for(j=0, j<10, j++){
            PORTA->PCR[contadorA[i][j]]|= PORT_PCR_MUX(1);
                for(k=0, k<9, k++){
                    PTA->PSOR|=(1u<<contador[i][j])
            }
        }
    }
}


void contadorDES(int i, int j, int k){
    for(i=4, i>0, i--){
        PORTA->PCR[contadorA[i][j]]|= PORT_PCR_MUX(1);
        for(j=10, j>0, j--){
            PORTA->PCR[contadorA[i][j]]|= PORT_PCR_MUX(1);
                for(k=, k>0, k--){
                    PTA->PSOR|=(0u<<contador[i][j]) 
            }
        }
    }
}