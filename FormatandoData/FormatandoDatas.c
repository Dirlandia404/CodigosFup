#include <stdio.h>

int main(){
    int hora = 0;
    int minuto = 0;
    int dia = 0;
    int mes = 0; 
    int ano = 0;
    
    scanf("%d", &hora);
    scanf("%d", &minuto);
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    
    printf("%02d:%02d %02d/%02d/%02d\n", (hora % 12), minuto, dia, mes, (ano % 100));
    
    return 0;
}