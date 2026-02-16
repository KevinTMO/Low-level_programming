#ifndef ROADMAP_H
#define ROADMAP_H

/* STD Libs */

#include <stdio.h>

/* PROTOTYPES FUNC BELOW */

int _putchar(char c); /* Prints a single character */

void resetTo98(int *n); /* Redifine the value of N */

void swapInts(int *a, int *b); /* Will swap the value of each arguments */

int strLen(char *str); /* Will return the len of the argument received */

void _puts(char *str); /* Will print a string of characters */

void printRevStr(char *str); /* Will print a string in reverse */

void revStr(char *str); /* Will reverse a string */

void putByTwo(char *str); /* Will print a character every two char */

void putsHalf(char *str); /* Will print the half of a string */

void printArr(int *arr, int n); /* Will print the elements of an arr by n time */

char *strCpy(char *dest, char *src); /* Will print a string into another array */

#endif