#include <stdio.h>
#include <math.h>
int punto1(int *a, int n){ 
    int distancia, estacionamiento, i, min, max;
    min = a[0];
    max = 0;
    estacionamiento = 0;
    for(i=1;i<n;i++){
        if(a[i] < min){
            min = a[i];
        }
        else if(a[i] > max){
            max = a[i];
        }
    }
    estacionamiento = fabs(min - max); 
    distancia = estacionamiento * 2;
    printf("%d",distancia);
    
}

int main(){ /*Falta mejorar entrada*/
    int casos=0, n=0, i, j=0;
    scanf("%d", &casos);
    while (j<casos)
    {
        scanf("%d",&n);
        int arreglo[n];

        for(i=0;i<n;i++){
            scanf("%d",&arreglo[i]);
        }
        punto1(arreglo,n);
        printf("\n");
        j++;
    }
    return 0;
}

