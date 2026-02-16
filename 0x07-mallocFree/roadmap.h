#ifndef ROADMAP_H
#define ROADMAP_H

/* STD HEADERS */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */

char *createArray(int amount, char ch); /* Will create an array and allocate memory to it */
char *strDup(char *str); /* Will duplicate a str in a new allocated str */
char *strConcat(char *str1, char *str2); /* Will concatenate two strings into a new one */

/* HELPER FUNC */

int strLen(char *str); /* Will get the lenght of a str */

#endif
