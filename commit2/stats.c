/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <This is my fist assignment>
 *
 * <This is used to check maximum,minimum,median and mean of array of 40 numbers>
 *
 * @author <Hariharan S>
 * @date <15-11-2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

 unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
 unsigned char *ptr=test;
unsigned char length=SIZE;

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
print_statistics(ptr,length);
}
unsigned int print_statistics(unsigned char *word, unsigned char length)
{



/* Add other Implementation File Code Here */

unsigned int print_array(unsigned char *word, unsigned char length)
{
 }
unsigned int find_maximum(unsigned char *word, unsigned char length)
{
  }
unsigned int find_minimum(unsigned char *word, unsigned char length)
{
  }
unsigned int sort_array(unsigned char *word, unsigned char length)
{
  
}
unsigned int find_median(unsigned char *word, unsigned char length)
{
}
unsigned int find_mean(unsigned char *word, unsigned char length)
{
 }
 
  

