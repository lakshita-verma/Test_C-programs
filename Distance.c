#include <stdio.h>

int main() {
    float inch,foot,km,metre,centimetre;
    printf("Enter the distance in km:");
    scanf("%f",&km);
    inch=km*39370.1;
    metre=km*1000;
    centimetre=km*100000;
    foot=km*3280.84;
    printf("Distance in inch,metre,centimetre,foot=%f\n%f\n%f\n%f\n",inch,metre,centimetre,foot);
    
    return 0;
}