#include <stdio.h>

#define SIZE 20

//** Function Prototype **
void initArray(int array[],int len);
void showArray(int array[],int len);

int main(int argc, char *argv[]){
   char str1[]={'h','e','l','l','o'};
   char str2[]="again";
   int numbers[SIZE];

   initArray(numbers,SIZE);
   showArray(numbers,SIZE);

   printf("%s\n",str1);

   return 0;
}

void initArray(int array[],int len){
   int index;

   for(index=0;index<len;index++){
      array[index]=0;
   }
}

void showArray(int array[],int len){
   int index;

   for(index=0;index<len;index++){
      printf("%d ",array[index]);
   }
   printf("\n");
 }
