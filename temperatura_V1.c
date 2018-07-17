#ifndef I_PIN_LM35
#define I_PIN_LM35 PIN_A0
#endif

#define __VALOR_20C
#define __VALOR_25C
#define __VALOR_30C


int status_temperatura(){
    int __TEMP_READ =0;
    set_adc_channel(0);
    delay_ms(1);

    __TEMP_READ = read_adc();

    if(__TEMP_READ <= __VALOR_20C){
        return 10;
    }
    else if(__TEMP_READ <= __VALOR_25C){
        return 30;
    }
    else if (__TEMP_READ <= __VALOR_30C){
        return 60;
    }
    else{
        return 90;
    }
}