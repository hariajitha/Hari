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
sort_array(word,length);
find_maximum(word,length);
find_minimum(word,length);
find_median(word,length);
find_mean(word,length);
}


/* Add other Implementation File Code Here */

unsigned int print_array(unsigned char *word, unsigned char length)
{
 for(int i=0;i<length;i++)
 {
  printf("%d ",word[i]);
  }
 printf("\n");
return(0);
}
unsigned int find_maximum(unsigned char *word, unsigned char length)
{
  unsigned char temp;
 temp=word[0];
 for(int i=0;i<length;i++)
 {
  if(word[i]>temp)
   temp=word[i];
  }
 printf("Maximum array value: %d\n",temp);
 return(0);
}
unsigned int find_minimum(unsigned char *word, unsigned char length)
{
  unsigned char temp;
 temp=word[0];
 for(int i=0;i<length;i++)
 {
  if(word[i]<temp)
   temp=word[i];
  }
 printf("Minimum array value: %d\n",temp);
 return(0);
}
unsigned int sort_array(unsigned char *word, unsigned char length)
{
 unsigned char temp;
 for(int i=0;i<length;i++)
 {
  for( int j=0;j<length;j++)
   {
    if(word[j]<word[j+1])
     {
      temp=word[j+1];
      word[j+1]=word[j];
      word[j]=temp;
      }
    }
 }
 printf("sorted array \n");
 print_array(word,length);
 return(0);
}
unsigned int find_median(unsigned char *word, unsigned char length)
{
 float mediam;
 mediam=(word[length/2] + word[(length/2)+1])/2;
 printf("Median value is %f \n",mediam);
 return(0);
}
unsigned int find_mean(unsigned char *word, unsigned char length)
{
 float mean=0;
 for(int i=0;i<length;i++)
 {
  mean+=word[i];
 }
 mean/=mean;
 printf("Mean value is %f \n",mean);
return(0);
}
 
  

