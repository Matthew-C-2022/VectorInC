#include <stdlib.h>
#include "Vector.h"

struct DynArray* DynArrayInit(int SizeOfElement) {
    struct DynArray* NewArr = malloc(sizeof(struct DynArray));
    NewArr->data = NULL;
    NewArr->CurPos = NULL;
    NewArr->size = 0;
    NewArr->capacity = 0;
    NewArr->SizeOfElement = SizeOfElement;
    return NewArr;
}

void DynArrayPushBack(struct DynArray* Arr, void* Element) {
    if (Arr->capacity == 0) {
        Arr->data = malloc(sizeof(void*));
        Arr->data[0] = Element;
        Arr->CurPos = Element;
        Arr->capacity = 1;
        Arr->size = 1;
    }
    else if (Arr->size == Arr->capacity) {
        Arr->data = realloc(Arr->data, sizeof(void*) * (Arr->capacity * 2));
        Arr->data[Arr->size] = Element;
        Arr->CurPos = Element;
        Arr->capacity *= 2;
        Arr->size++;
    }
    else {
        Arr->data[Arr->size] = Element;
        Arr->CurPos = Element;
        Arr->size++;
    }
}

void DynArrayPopBack(struct DynArray* Arr) {
    if (Arr->size == 0) {
        return;
    }
    else {
        Arr->data[Arr->size-1] = NULL;
        Arr->size--;
    }
}

void DynArrayResize(struct DynArray* Arr, int NewSize) {
    if (NewSize > Arr->capacity) {
        Arr->data = realloc(Arr->data, sizeof(void*) * NewSize);
        Arr->capacity = NewSize;
    }
    else if (NewSize < Arr->size) {
        for (size_t i = NewSize; i <= Arr->size; i++)
        {
            Arr->data[i] = NULL;
        }
        Arr->size = NewSize;
        Arr->capacity = NewSize;
    }
}

void* DynArrayGetElement(struct DynArray* Arr, int Index) {
    if (Index >= Arr->size) {
        return NULL;
    }
    else {
        return Arr->data[Index];
    }
}
