#include <stdio.h>
#include <stdlib.h>

int desc (const void * a, const void * b){
    return ( *(int*)b - *(int*)a );
}

int main(){
    int N, i;
    printf("Numero de datos a ordenar：");
    scanf("%d",&N);
    int datos[N];

    for( i = 0 ; i < N; i++ ) {
     scanf("%d", &datos[i]);
    }

    qsort(datos, N, sizeof(int), desc); // Función de ordenación

    printf("\nDatos Ordenados：\n");
    for( i = 0 ; i < N; i++ ) {
        printf("%d ", datos[i]);
}
return 0;
}
