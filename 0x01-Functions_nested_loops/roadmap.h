#ifndef ROADMAP_H
#define ROADMAP_H

/* INCLUDES OF LIBRARIES */

#include <stdio.h>

/* FUNC PROTOTYPES DECLARATION BELOW */

int _putchar(char c); /* Will print a single character */

void printAlphabet(void); /* Will print an alphabet in lowercase */

void printTenAlphabet(void); /* Will print an alphabet in lowercase 10 times */

int checkLower(int ch); /* Will check if the value received is a lowercase character */

int checkAlpha(int ch); /* Will check if the valure received is a character */

int printSign(int n); /* Will print a sign of negative or pos to a number received */

int absVal(int n); /* Will return the absolute value of a number */

void printLastDigit(int n); /* Will return the last digit of number in positive */

void jackBauer(void); /* will print digits from 00:00 to 23:59 */

void printTimesTable(void); /* will print all times table */

int addInt(int a, int b); /* will adds two integers and return the result */

void printTo98(int n); /* will print all natural numbers till 98 */

#endif
