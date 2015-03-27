//
//  Comparator.c
//  PointersAndMe
//
//  Created by Víctor Briones on 3/26/15.
//  Copyright (c) 2015 Nope Incorporated. All rights reserved.
//

#include "Sort.h"

void universalDataSorter(void * data, size_t dataSize, int arraySize, void (*dataSwap)(void *, void *)){
    for (void * current = data; current < data+(arraySize*dataSize); current+=dataSize){
        for (void * swap = current; swap < data+((arraySize-1)*dataSize); swap+=dataSize){
            dataSwap(current, swap+dataSize);
        }
    }
}

void intSwap(void * a, void * b){
    if(*((int*)a) > *((int*)b)){
        swapPointers(int, a, b);
    }
}

void charSwap(void * a, void * b){
    if (*((char*)a) > *((char*)b)){
        swapPointers(char, a, b);
    }
}

void personByAgeSwap(void * a, void * b){
    Person pA = *((Person*)a), pB = *((Person*)b);
    if (pA.age > pB.age) {
        swapPointers(Person, a, b);
    }
}

void personByNameSwap(void * a, void * b){
    Person pA = *((Person*)a), pB = *((Person*)b);
    for (int i = 0; i < strlen(pA.name); i++){
        if (pA.name[i] > pB.name[i]){
            swapPointers(Person, a, b);
            return;
        }
        else if (pA.name[i] < pB.name[i]){
            return;
        }
    }
}