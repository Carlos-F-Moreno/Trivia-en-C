#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include "trivia.h"

void limpiar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void mezclar_preguntas(Pregunta array[], int n) {
    if (n > 1) {
        for (int i = n - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            Pregunta temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
}

int cargar_puntaje_maximo() {
    FILE *archivo = fopen("highscores.txt", "r");
    int puntaje_maximo = 0;
    if (archivo == NULL) {
        return 0;
    }
    fscanf(archivo, "%d", &puntaje_maximo);
    fclose(archivo);
    return puntaje_maximo;
}

void guardar_puntaje_maximo(int puntaje) {
    FILE *archivo = fopen("highscores.txt", "w");
    if (archivo == NULL) {
        printf("Error al guardar el puntaje máximo.\n");
        return;
    }
    fprintf(archivo, "%d", puntaje);
    fclose(archivo);
}

int obtener_respuesta_con_tiempo(int tiempo_limite) {
    time_t inicio, actual;
    time(&inicio);
    int opcion;
    int leido = 0;
    while (1) {
        if (scanf("%d", &opcion) == 1) {
            leido = 1;
            limpiar_buffer();
            break;
        }
        time(&actual);
        double segundos = difftime(actual, inicio);
        if (segundos >= tiempo_limite) {
            return -1;
        }
#ifdef _WIN32
        Sleep(100);
#else
        usleep(100000);
#endif
    }
    if (leido && (opcion >= 1 && opcion <= 3)) {
        return opcion;
    }
    return -1;
}
