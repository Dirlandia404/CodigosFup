#include <stdio.h>

int inserirLote(int vet[], int *size){
    int qtd = 0, valor = 0;
    scanf("%d", &qtd);
    for(int i = *size; i < (*size + qtd); i++){
        scanf("%d", &valor);
        vet[i] = valor;
    }
    return qtd;
}
void mostrar(int vet[], int *size){
    printf("[ ");
    for(int i = 0; i < *size; i++){
        printf("%d ", vet[i]);
    }
    printf("]\n");
}
void inserirpos(int vet[], int *size){
    int pos = 0;
    scanf("%d", &pos);
    for(int i = (*size-1); i >= pos; i--){
        vet[i+1] = vet[i]; 
    }
    int valor = 0;
    scanf("%d", &valor);
    vet[pos] = valor; 
}
void removerpos(int vet[], int *size){
    int pos = 0;
    scanf("%d", &pos);
    for(int i = pos; i < *size; i++){
        vet[i] = vet[i + 1]; 
    }
}
int main(){
    char letra = ' ';
    int vet[99];
    int size = 0;
   
    for(;;){
        scanf(" %c", &letra);
        if(letra == 'a'){
            size += inserirLote(vet, &size);
        }else if(letra == 's'){
            mostrar(vet, &size);
        }else if(letra == 'i'){
            inserirpos(vet, &size);
            size++;
        }else if(letra == 'r'){
            removerpos(vet, &size);
            size--;
        }else{
            break;
        }
    }
    return 0;  
}