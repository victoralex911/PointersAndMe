//
//  main.c
//  PointersAndMe
//
//  Created by Víctor Briones on 3/26/15.
//  Copyright (c) 2015 Nope Incorporated. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sort.h"

void printIntArray(int * array, int size);
void printPersonArray(Person * array, int size);
void printString(char * string);

int main(int argc, const char * argv[]) {
    
    char ab [] = "qwertyuiopasdfghjklzxcvbnm";
    int xy [] = {3,5,1,6,8,4,9,2,7};
    
    Person pA;
    pA.age = 20;
    pA.name = "Victor_Older";
    
    Person pB;
    pB.age = 10;
    pB.name = "Victor_Younger";
    
    Person pC;
    pC.age = 15;
    pC.name = "Victor_Middle";
    
    Person pplAge [] = {pA, pB, pC};
    Person pplName [] = {pA, pB, pC};
    
    printf("Before sorting.\n\n");
    printString(ab);
    printIntArray(xy, 9);
    printf("\n");
    printPersonArray(pplAge, 3);
    printPersonArray(pplName, 3);
    
    universalDataSorter(ab, sizeof(char), 26, &charSwap);
    universalDataSorter(xy, sizeof(int), 9, &intSwap);
    universalDataSorter(pplName, sizeof(Person), 3, &personByNameSwap);
    universalDataSorter(pplAge, sizeof(Person), 3, &personByAgeSwap);

    printf("After sorting.\n\n");
    printString(ab);
    printIntArray(xy, 9);
    printf("\n");
    printPersonArray(pplAge, 3);
    printPersonArray(pplName, 3);
    
    return 0;
}

void printIntArray(int * array, int size){
    for (int i = 0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printPersonArray(Person * array, int size){
    for (int i = 0; i<size; i++) {
        printf("%s %d\n", array[i].name, array[i].age);
    }
    printf("\n");
}

void printString(char * string){
    printf("%s\n\n", string);
}

