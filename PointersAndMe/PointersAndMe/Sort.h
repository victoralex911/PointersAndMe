//
//  Comparator.h
//  PointersAndMe
//
//  Created by Víctor Briones on 3/26/15.
//  Copyright (c) 2015 Nope Incorporated. All rights reserved.
//

#ifndef __PointersAndMe__Comparator__
#define __PointersAndMe__Comparator__

#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    char * name;
} Person;

/*!Sorts an array of any kind of data. It's universal biatch.
 \param data It's an array of data. It shouldn't be sorted before.
 \param dataSize The array's data type size.
 \param arraySize The size of the array.
 \param dataSwap It's the swapper function. It swaps the data of two pointers. Create one for your data type or use an existing one.
 */
void universalDataSorter(void * data, size_t dataSize, int arraySize, void (*dataSwap)(void *, void *));

/*!Swaps int pointer values if <b>a</b> points to a bigger value than <b>b</b>'s... Not a big deal.
 \param *a Pointer to the first value to swap.
 \param *b Pointer to the second value to swap.
 */
void intSwap(void * a, void * b);

/*!Swaps char pointer values if <b>a</b> points to a value that comes after <b>b</b>'s... Pice of cake.
 \param *a Pointer to the first value to swap.
 \param *b Pointer to the second value to swap.
 */
void charSwap(void * a, void * b);

/*!Swaps two people if <b>a</b> is older than <b>b</b>. Don't use with women.
 \param *a Pointer to one person.
 \param *b Pointer to other person.
 */
void personByAgeSwap(void * a, void * b);

/*!Swaps two people if <b>a</b> has a better name.. I mean, if <b>a</b>'s name comes first.
 \param *a Pointer to one person.
 \param *b Pointer to other person.
 */
void personByNameSwap(void * a, void * b);
#endif /* defined(__PointersAndMe__Comparator__) */
