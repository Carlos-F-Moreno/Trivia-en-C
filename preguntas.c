
#include "preguntas.h"

Pregunta analisis_matematico[TOTAL_PREGUNTAS] = {
    {"¿Cuál es la derivada de x^2?", {"2x", "x^2", "x"}, 0},
    {"¿Qué es un límite?", {"Un valor que tiende a infinito", "Un valor al que tiende una función", "Una constante"}, 1},
    {"¿Qué es una integral?", {"La derivada de una función", "El área bajo una curva", "El límite de una serie"}, 1},
    {"¿Qué es una serie?", {"Una sucesión de términos", "Una suma infinita", "Una función continua"}, 1},
    {"¿Cómo se define la continuidad de una función?", {"Es continua si su derivada existe", "Es continua si no tiene saltos", "Es continua si es integrable"}, 1},
    {"¿Qué es el teorema fundamental del cálculo?", {"Relaciona derivadas e integrales", "Es la base de la geometría", "Define el concepto de límite"}, 0},
    {"¿Qué es una función creciente?", {"Una función que aumenta su valor", "Una función con derivada negativa", "Una función con derivada cero"}, 0},
    {"¿Cómo se calcula la derivada de una suma de funciones?", {"Derivando cada función por separado", "Usando la regla del producto", "Derivando solo la primera función"}, 0},
    {"¿Qué es un punto crítico?", {"Un punto donde la derivada es cero", "Un punto de inflexión", "Un máximo global"}, 0},
    {"¿Qué es un máximo local?", {"Un punto donde la función alcanza su valor más alto", "Un punto donde la derivada es negativa", "Un punto donde la derivada es positiva"}, 0},
    {"¿Qué es una función impar?", {"Una función simétrica respecto al origen", "Una función simétrica respecto al eje y", "Una función constante"}, 0},
    {"¿Qué es una asíntota?", {"Una línea que la función nunca alcanza", "Una curva que interseca con la función", "Una línea paralela al eje y"}, 0},
    {"¿Qué es una derivada parcial?", {"La derivada de una función con varias variables", "La derivada de una función lineal", "La derivada de una constante"}, 0},
    {"¿Qué es un punto de inflexión?", {"Un punto donde cambia la concavidad", "Un punto donde la derivada es cero", "Un máximo o mínimo local"}, 0},
    {"¿Qué es una función compuesta?", {"Una función que resulta de aplicar dos funciones", "Una función con varias variables", "Una función polinómica"}, 0}
};

Pregunta algebra[TOTAL_PREGUNTAS] = {
    {"¿Qué es una matriz?", {"Una tabla de valores", "Una operación matemática", "Un número complejo"}, 0},
    {"¿Qué es el determinante de una matriz?", {"Un número que describe ciertas propiedades de la matriz", "El número de filas por columnas", "El valor máximo de los elementos"}, 0},
    {"¿Qué es una matriz inversa?", {"Una matriz que al multiplicarse por otra da la matriz identidad", "Una matriz con determinante cero", "Una matriz con todos los elementos negativos"}, 0},
    {"¿Qué es un sistema de ecuaciones lineales?", {"Un conjunto de ecuaciones con las mismas incógnitas", "Una ecuación cuadrática", "Una función lineal"}, 0},
    {"¿Cuándo es consistente un sistema de ecuaciones?", {"Cuando tiene al menos una solución", "Cuando tiene infinitas soluciones", "Cuando no tiene solución"}, 0},
    {"¿Qué es una transformación lineal?", {"Una función que preserva la suma y la multiplicación por escalar", "Una función cuadrática", "Una función con derivada constante"}, 0},
    {"¿Qué es un vector?", {"Una magnitud con dirección", "Una matriz cuadrada", "Un número real"}, 0},
    {"¿Qué es el producto escalar?", {"El producto de dos vectores que da un número", "El producto de dos matrices", "El producto de una matriz por un vector"}, 0},
    {"¿Qué es un espacio vectorial?", {"Un conjunto de vectores que cumple ciertas propiedades", "Una matriz de vectores", "Una recta en el plano cartesiano"}, 0},
    {"¿Qué es la dimensión de un espacio vectorial?", {"El número de vectores en una base del espacio", "El número de coordenadas de un vector", "El número de filas de una matriz"}, 0},
    {"¿Qué es la base de un espacio vectorial?", {"Un conjunto de vectores linealmente independientes", "Una matriz invertible", "Un conjunto de números reales"}, 0},
    {"¿Qué es un sistema homogéneo de ecuaciones?", {"Un sistema en el que todas las ecuaciones son iguales", "Un sistema que tiene una solución trivial", "Un sistema que no tiene soluciones"}, 1},
    {"¿Qué es la regla de Cramer?", {"Un método para resolver sistemas de ecuaciones usando determinantes", "Una fórmula para la matriz inversa", "Una técnica para calcular el producto escalar"}, 0},
    {"¿Qué significa que un vector sea linealmente dependiente?", {"Que se puede escribir como combinación lineal de otros vectores", "Que tiene la misma dirección que otro vector", "Que su norma es cero"}, 0},
    {"¿Qué es un autovalor?", {"Un número asociado a una matriz que describe su comportamiento en una transformación lineal", "El valor más grande en una matriz", "La suma de los elementos de una matriz"}, 0}
};

Pregunta informatica[TOTAL_PREGUNTAS] = {
    {"¿Qué es un byte?", {"8 bits", "16 bits", "32 bits"}, 0},
    {"¿Qué es un algoritmo?", {"Una serie de pasos para resolver un problema", "Una operación matemática", "Un lenguaje de programación"}, 0},
    {"¿Qué es un bucle?", {"Una estructura que repite instrucciones", "Un conjunto de datos", "Una variable"}, 0},
    {"¿Qué es una variable?", {"Un espacio de memoria para almacenar datos", "Una operación matemática", "Un número aleatorio"}, 0},
    {"¿Qué es un compilador?", {"Un programa que traduce código fuente a código máquina", "Un editor de texto", "Un sistema operativo"}, 0},
    {"¿Qué es una función recursiva?", {"Una función que se llama a sí misma", "Una función que no tiene retorno", "Una función que ejecuta un bucle"}, 0},
    {"¿Qué es un puntero?", {"Una variable que almacena la dirección de memoria de otra variable", "Una función que apunta a otra función", "Un operador matemático"}, 0},
    {"¿Qué es la memoria RAM?", {"La memoria principal donde se almacenan los programas en ejecución", "La memoria del disco duro", "Una memoria de solo lectura"}, 0},
    {"¿Qué es un archivo binario?", {"Un archivo que almacena datos en formato binario", "Un archivo de texto", "Un archivo comprimido"}, 0},
    {"¿Qué es un sistema operativo?", {"Un software que gestiona el hardware y los programas", "Un programa de edición", "Un lenguaje de programación"}, 0},
    {"¿Qué es la programación orientada a objetos?", {"Un paradigma que organiza el código en objetos", "Un tipo de compilador", "Una estructura de datos"}, 0},
    {"¿Qué es una base de datos?", {"Un sistema para almacenar y gestionar datos", "Un archivo de texto", "Una estructura condicional"}, 0},
    {"¿Qué es una red informática?", {"Un conjunto de computadoras interconectadas", "Un archivo compartido", "Un sistema operativo"}, 0},
    {"¿Qué es HTML?", {"Un lenguaje de marcado para crear páginas web", "Un protocolo de comunicación", "Un sistema operativo"}, 0},
    {"¿Qué es un servidor?", {"Un sistema que provee servicios a otros sistemas", "Un cliente web", "Un archivo comprimido"}, 0}
};
