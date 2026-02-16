#ifndef ROADMAP_H
#define ROADMAP_H

/* STD Libs */

#include <stdio.h>

/* Helper Func Prototypes */

int strLen(char *str); /* Get the len of a str */
char *strCpy(char *dest, char *src); /* Copy a string */

/* Prototypes */

char *strCat(char *dest, char *src); /* Will concatenate two strings and return the result */

char *strNcat(char *dest, char *src, int maxIdx); /* will concatenate two strings until n bytes */

char *strNcpy(char *dest, char *src, int nBytes); /* Will copy a string from src to dest */

int strCmp(char *s1, char *s2); /* Will compare two strings */

void revArr(int *arrInt, int size); /* Will reverse an arr of integers */

char *strToUpper(char *str); /* Will change all char to uppercase */

char *capStr(char *str); /* Will capitalize every first char of a word in a str */

#endif
