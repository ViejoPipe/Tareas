#include <stdio.h>
#include <math.h>

int punto1(int *a, int n){
    int diferencia=0, estacionamiento=0, distancia =0, distancias =0;
    int j, i, h;
    for(j=1; j<n; j++){
        int clave = a[j];
        int i = j-1;
        while(i>=0 && a[i] > clave){
            a[i+1] = a[i];
            i = i-1;
        }
    a[i+1] = clave;
    }
    for(i=1; i<n; i++){
        diferencia = a[i] - a[i-1]; 
        estacionamiento += diferencia;
    }
    for(h=0; h<=n; h++){
        if(h == 0){
            distancia = estacionamiento - a[h];
            distancias += distancia;
        }
        else if(h == n){
            distancia = estacionamiento - a[h-1];
            distancia = fabs(distancia);
            distancias += distancia;
        }
        else{
            distancia = a[h] - a[h-1];
            distancias += distancia;
        }
    }
    printf("estacionamiento : %d", distancias);
}

int main(){
    int arreglo[] = {24,13,89,37};
    int n=4, i;
    punto1(arreglo, n);
    return 0;
}

