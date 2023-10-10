#include <stdio.h>
#include "mylib.h"

int main(int argc, char *argv[]){
   int numbers[SIZE]={10,20,30,40,50};
   int total;

   total=sum(numbers,SIZE);
   printf("Total: %d\n",total);
   show(numbers,SIZE);
   return 0;
}

