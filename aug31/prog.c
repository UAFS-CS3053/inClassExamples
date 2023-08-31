#include <stdio.h>

#define SIZE 6

int main(int argc, char *argv[]){
   char numbers[SIZE]={'h','e','l','l','o','\0'};
   int index;
   char *ptr;
   ptr=numbers;

   for(index=0;index<SIZE;index++){
      printf("%p | %c - %d\n",&numbers[index],numbers[index],numbers[index]);
   }

   while(*ptr!='\0'){
      printf("%c",*ptr);
      ptr++;
   }
   printf("\n");

   return 0;
}
