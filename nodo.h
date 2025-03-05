#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATO;

typedef struct Nodo{
    DATO dato;
    struct Nodo* sig;
} Nodo;

Nodo* crear_nodo();
bool borrar_nodo(Nodo* n);
Nodo* asignar_dato(Nodo* n, DATO d);
DATO obtener_dato(Nodo* n);
Nodo* asignar_ref(Nodo* n, Nodo*e);
Nodo* obtener_ref(Nodo* n);

#endif
