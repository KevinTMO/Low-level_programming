#ifndef ROADMAP_H
#define ROADMAP_H

/* STD LIBRARIES */

#include <stdio.h>

/* _putchar will print a char passed to stdout */

int _putchar(int c);

/* resetTo98 will reset the value of the parameter passed using a pointer */

void resetTo98(int *n);

/* swapInts will swap the values of two var integers */

void swapInts(int *a, int *b);

/* strLen will return the len of a string */

int strLen(char *str);

/* _puts will print a string passed followed by a newline */

void _puts(char *str);

/* printRevStr will print a string in reverse */

void printRevStr(char *str);

/* revStr will reverse a string */

void revStr(char *s);

/* putsBy2 will print a char every two char */

void putByTwo(char *);

/* putsHalf will print the half of a string */

void putsHalf(char *);

/* printArr will print an array of integers by n elements */

void printArr(int *, int);

/* strCpy will copy the string passed and return */

char *strCpy(char *, char *);

#endif