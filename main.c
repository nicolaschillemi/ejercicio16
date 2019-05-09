#include <stdio.h>

void main()

{
    float monto_a_pagar;
    int horas;
    int horas_gratis = 0;

    printf("Cuantas horas desea utilizar: ");
    scanf("%i",&horas);

    horas_gratis = horas / 5;

    monto_a_pagar = horas - horas_gratis;

    printf("Tenes que pagar $%f", monto_a_pagar * 15);

}


