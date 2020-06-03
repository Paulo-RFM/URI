#include<stdio.h>

void calculaDia(Data data){
    int dia = data.endDay - data.startDay;
    printf("%d %s", (dia), "dias(s)\n");
}

int ajustaDia(int horaInic, int horaFinal){
    if(horaFinal < horaInic){
        return -1;
    }else{
        return 0;
    }
}

float convDiaHora(int diaAjustado){
    float minDia=(24*60) * diaAjustado;
    return minDia; 
}


typedef struct sData{
    int startDay, endDay;
    float hora[2][3];
}Data;


int main(){
Data data;
float dia;

    printf("%s ", "Dia");
    scanf("%d", &data.startDay);
    printf("\n");

    for(int i = 0 ; i < 3 ; i++){
        scanf("%f", &data.hora[0][i]);
    }

    printf("%s ", "Dia");
    scanf("%d", &data.endDay);
    printf("\n");

    for (int i = 0; i < 3; i++){
        scanf("%f", &data.hora[1][i]);
    }

    


    
return 0;
}

