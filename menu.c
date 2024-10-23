
#include <stdio.h>
#include "menu.h"

void mostrar_menu() {
    printf("\n=== JUEGO DE TRIVIA ===\n");
    printf("1. Análisis Matemático\n");
    printf("2. Álgebra\n");
    printf("3. Informática\n");
    printf("0. Salir\n");
}

int obtener_opcion(int min, int max) {
    int opcion;
    while (1) {
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Por favor, ingrese un número entre %d y %d: ", min, max);
            limpiar_buffer();
            continue;
        }
        if (opcion < min || opcion > max) {
            printf("Opción fuera de rango. Por favor, ingrese un número entre %d y %d: ", min, max);
            limpiar_buffer();
            continue;
        }
        limpiar_buffer();
        return opcion;
    }
}

void limpiar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
