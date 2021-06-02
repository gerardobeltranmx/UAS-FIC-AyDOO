#include <stdio.h>
#include <stdlib.h>

int asc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main(){
    int N, i;
    printf("Numero de datos a ordenar：");
    scanf("%d",&N);
    int datos[N];

    for( i = 0 ; i < N; i++ ) {
     scanf("%d", &datos[i]);
    }

    qsort(datos, N, sizeof(int), asc); // Función de ordenación

    printf("\nDatos Ordenados：\n");
    for( i = 0 ; i < N; i++ ) {
        printf("%d ", datos[i]);
}
return 0;
}
