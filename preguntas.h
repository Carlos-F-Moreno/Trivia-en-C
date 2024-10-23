#ifndef PREGUNTAS_H
#define PREGUNTAS_H

#define TOTAL_PREGUNTAS 15
#define CANT_CATEGORIAS 3
#define TIME_LIMIT 30

typedef enum {
    ANALISIS_MATEMATICO = 1,
    ALGEBRA,
    INFORMATICA
} Categoria;

typedef struct {
    char pregunta[256];
    char opciones[3][100];
    int respuesta_correcta;
} Pregunta;

extern Pregunta analisis_matematico[TOTAL_PREGUNTAS];
extern Pregunta algebra[TOTAL_PREGUNTAS];
extern Pregunta informatica[TOTAL_PREGUNTAS];

#endif
