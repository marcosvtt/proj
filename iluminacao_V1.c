#ifndef I_PIN_LDR
#define I_PIN_LDR PIN_A1
#endif

#define __LIMITE_ESCURO
#define __LIMITE_SOMBRA



int status_iluminacao(){
    int __LDR_READ =0;
    set_adc_channel(1);
    delay_ms(1);
    __LDR_READ = read_adc();
    if(__LDR_READ > __LIMITE_SOMBRA){
        return 3;
    }
    else if(__LDR_READ > __LIMITE_ESCURO){
        return 1;
    }
    else{
        return 0;
    }
}