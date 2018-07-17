
//#include <definicioes.h>


#ifndef I_PIN_SENSOR_CANO
#define I_PIN_SENSOR_CANO       PIN_B1
#endif

#ifndef I_PIN_SENSOR_CISTERNA
#define I_PIN_SENSOR_CISTERNA   PIN_B2
#endif

#ifndef I_PIN_SENSOR_CAIXA
#define I_PIN_SENSOR_CAIXA      PIN_B3
#endif

#define _PULSE_DUTY 1000 //milisegundos

int __PROPORCAO = 1;
int __CISTERNA_CONT = 0;


void begin_hidraulica(int vol_caixa, int vol_cisterna){
    __PROPORCAO = vol_cisterna/vol_caixa;
}

//********************************
void main(){
    enable_interrupts(INT_RDB);
}
//********************************

bool valvula_status(){
    bool __V_VALVULA;
    if (I_PIN_SENSOR_CANO && !I_PIN_SENSOR_CISTERNA)
    {
        return = 1;
    }
    else{
        return = 0;
    }
}

bool bomba_status(){
    bool __CISTERNA;
    if(I_PIN_SENSOR_CISTERNA){
        __CISTERNA_CONT = __PROPORCAO;
    }

    if(I_PIN_SENSOR_CISTERNA || __CISTERNA_CONT > 0){
        __CISTERNA = 1;
        __CISTERNA_CONT --;
    }
    else{
        __CISTERNA = 0;
    }
    
    if(__CISTERNA && !I_PIN_SENSOR_CAIXA){
        return 1;
    }
    else{
        return 0;
    }

}

