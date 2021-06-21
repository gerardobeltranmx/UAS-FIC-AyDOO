#include <stdio.h>
#include <string.h>
int main()
{
    char completo [80];
    char nombre[32] = "Luis";
    char apellidos [32] = "Beltran Lopez";
    /* Construye el nombre completo */
    strcpy ( completo, nombre ); /* completo <- "Luis" */
    strcat ( completo, " "); /* completo <-"Luis " */
    strcat ( completo, apellidos ); /* completo <-"Luis Beltran Lopez" */
    printf ( "El nombre completo es %s\n", completo );
    printf("La longitud del nombre completo es %lu\n", strlen(completo));
    return 0;
}
