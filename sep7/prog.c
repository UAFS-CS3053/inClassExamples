#include <stdio.h>

//** Function Prototypes
int Strlen(char *str);

int main(int argc, char *argv[]){
   int numbers[]={10,20,30,40,50};
   int index;
   int len;
   char str[]="Hello Again";
   int *ptr;
   ptr=numbers;


   for(index=0;index<5;index++){
	printf("%d\n",*ptr);
	ptr++;
   }
   
   len=Strlen(str);
   printf("%d : %s\n",len,str);

   return 0;
}

int Strlen(char *str){
   int count=0;

   while(*str!='\0'){
      count++;
      str++;
   }
   return count;
}
