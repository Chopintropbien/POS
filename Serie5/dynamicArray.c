#include <stdio.h>
#include <stdint.h>

typedef int type_el;

#define VECTOR_DEFAULT_INITIALISATION = 10;

typedef struct{
    size_t size;
    size_t allocated;
    type_el* pointer;
} vector;


vector* create(){
    vector* vec = malloc(sizeof(vector));
    if(vec == NULL) return NULL;
    
    vec->size = 0;
    vec->allocated = VECTOR_DEFAULT_INITIALISATION;
    vec->pointer = calloc(intiSize, sizeof(type_el));
    if(vec->pointer == NULL) return NULL
        
    return vec
}

void delete(vector* v){
    if (v != NULL) {
        free(vec->pointer);
        vec->pointer = NULL;
        
        free(v);
        v = NULL;
    }
}

vector* add(vector* v, type_el e){
    if (v != NULL) {
        if(v->size < v->allocated){
            ++(v->size);
            pointer[v->size] = e;
            return v;
        }
        else{
            size_t newSize = v->allocated + VECTOR_DEFAULT_INITIALISATION;
            if (newSize > SIZE_MAX / sizeof(type_el)) {
                return NULL;
            }
            v = realloc(v, newSize * sizeof(type_el));
            if(v == NULL) return NULL;
            else add(tmp, e);
        }
    }
    else return NULL;
}

type_el* read(vector* v, size_t i){
    if(v != NULL && i < v->size){
        return &(v->pointer[i]);
    }
    else return NULL;
}

vector* change(vector* v, type_el e, size_t i){
    if (v != NULL && i < v->size) {
        v->pointer[i] = e;
    }
    else return NULL;
    
}


int main(void){
    
    
    
    
    
    
    return 0;
}
