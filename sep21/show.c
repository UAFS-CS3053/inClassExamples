#include "mylib.h"

void show(int *array,int len){
   int index=0;

   printf("[");
   for(index=0;index<len;index++){
      if(index!=0){
         printf(",");
      }
      printf("%d",array[index]);
   }
   printf("]\n");
}



