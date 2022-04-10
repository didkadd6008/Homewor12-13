#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
char* array;
size_t max_size,lenght;
}dianamicArray;

dianamicArray newdianamicArray(size_t initial_max_size){
    dianamicArray newdianamicArray;
    newdianamicArray.max_size = initial_max_size;
    newdianamicArray.lenght = 0;
    newdianamicArray.array = malloc(sizeof(char)*initial_max_size);
    if (!newdianamicArray.array)
    {
        fprintf(stderr,"Malloc failed!\n");
        exit(-1);
    }
    return newdianamicArray;
}

void push(dianamicArray* darr,int newSymbol){
    if (darr->lenght == darr->max_size)
    {
        int newMaxSize = darr->max_size*2;
        darr->array = realloc(darr->array,newMaxSize*sizeof(char));
        darr->max_size = newMaxSize;
        if (darr->array == NULL)
        {
            fprintf(stderr,"Realloc failed");
            exit(-1);
        }
        
    }
    darr->array[darr->lenght++] = newSymbol;
    
    
}

int main(){

}