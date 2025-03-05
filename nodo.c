#include "nodo.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

Nodo* crear_nodo(){
    Nodo* nuevo= (Nodo*)malloc(sizeof(Nodo));
    if (!nuevo) return NULL;
    nuevo->sig=NULL;
    nuevo->dato=0;
    return nuevo;
}

bool borrar_nodo(Nodo* n){
    if(n->sig==NULL){
    free(n);
    return true;
    }
    return false;
}

Nodo* asignar_dato(Nodo* n, DATO d){
    if(n!=NULL){
        n->dato=d;
    }
    return n;
}

DATO obtener_dato(Nodo* n){
    if(n==NULL){
        printf("No hay datos\n");
        return -1;
    }
    return n->dato;
}

Nodo* asignar_ref(Nodo* n, Nodo* e){
    if(n!=NULL){
        n->sig=e;
    }
    return n;
}

Nodo* obtener_ref(Nodo* n){
    if(n!=NULL){
        return n->sig;
    }
    return NULL;
}
