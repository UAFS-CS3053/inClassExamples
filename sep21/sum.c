#include "mylib.h"

int sum(int *array,int len){
   int sum=0;
   int index=0;

   for(index=0;index<len;index++){
      sum = sum + array[index];
   }
   return sum;
}

