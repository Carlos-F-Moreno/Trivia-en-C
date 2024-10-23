#ifndef TRIVIA_H
#define TRIVIA_H

#include "preguntas.h"

int jugar_trivia(Pregunta preguntas[], int total_preguntas, const char *categoria_nombre);
void mezclar_preguntas(Pregunta array[], int n);
int cargar_puntaje_maximo();
void guardar_puntaje_maximo(int puntaje);
int obtener_respuesta_con_tiempo(int tiempo_limite);

#endif
