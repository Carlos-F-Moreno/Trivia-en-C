#include "menu.h"
#include "trivia.h"
#include "preguntas.h"
#include <stdio.h>   // Para printf, scanf
#include <stdlib.h>  // Para srand, exit, NULL
#include <time.h>    // Para time

int main() {
    int opcion;
    int puntaje;
    int puntaje_maximo;

    srand(time(NULL)); // Inicializar la semilla para la aleatorización

    do {
        mostrar_menu();
        printf("Seleccione una categoría (1-3) o 0 para salir: ");
        opcion = obtener_opcion(0, CANT_CATEGORIAS);

        switch(opcion) {
            case ANALISIS_MATEMATICO:
                mezclar_preguntas(analisis_matematico, TOTAL_PREGUNTAS);
                puntaje = jugar_trivia(analisis_matematico, TOTAL_PREGUNTAS, "Análisis Matemático");
                break;
            case ALGEBRA:
                mezclar_preguntas(algebra, TOTAL_PREGUNTAS);
                puntaje = jugar_trivia(algebra, TOTAL_PREGUNTAS, "Álgebra");
                break;
            case INFORMATICA:
                mezclar_preguntas(informatica, TOTAL_PREGUNTAS);
                puntaje = jugar_trivia(informatica, TOTAL_PREGUNTAS, "Informática");
                break;
            case 0:
                printf("\nGracias por jugar. ¡Hasta luego!\n");
                exit(0);
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

        puntaje_maximo = cargar_puntaje_maximo();
        if (puntaje > puntaje_maximo) {
            printf("\n¡Felicidades! Has alcanzado un nuevo puntaje máximo.\n");
            guardar_puntaje_maximo(puntaje);
        } else {
            printf("\nTu puntaje máximo actual es: %d\n", puntaje_maximo);
        }

        printf("\n¿Desea jugar otra vez? (s/n): ");
        char respuesta;
        scanf(" %c", &respuesta);
        limpiar_buffer();
        if (respuesta == 'n' || respuesta == 'N') {
            printf("Gracias por jugar. ¡Hasta luego!\n");
            break;
        }

    } while(1);

    return 0;
}
