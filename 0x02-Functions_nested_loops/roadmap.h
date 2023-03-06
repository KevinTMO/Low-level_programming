#ifndef ROADMAP_H
#define ROADMAP_H

/* STD libraries */

#include <stdio.h>
#include <stdlib.h>

/* _putchar will print a character by returning by n byte to fd */

int _putchar(int c);

/* printAlphabet should print the alphabet in lowercase */

void printAlphabet(void);

/* printAlphabet_X will print the alphabet in lowercase ten times */

void printAlphabet_X(void);

/* checkLower will validate if the value received is a lower character or not */

int checkLower(int c);

/* checkAlpha will validate if the value received is part of the alphabet or not */

int checkAlpha(char c);

/* printSign will validate the value received and print a sign accordingly */

int printSign(int number);

/* absVal will validate the value received and return the absolute value */

int absVal(int number);

/* lastDigit will print the last digit of a number */

void printLastDigit(int number);

/* printTimesTable will print the time table of 0 till 9 */

void printTimesTable(void);

/* addInt will make the addition of two integers and return the result */

int addInt(int, int);

/* printT98 will print all natural numbers from n to 98 */

void printT98(int);

/* printNTable will print the times table by n time */

void printNTable(int);

#endif