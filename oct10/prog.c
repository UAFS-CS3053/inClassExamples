#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
   pid_t pid;

   pid=fork();
   if(pid==0){
      // Child Process
      while(1){
         printf("Child: %d\n",getpid());
         sleep(2);
      }
   }else{
      //Parent Process
      while(1){
         printf("Parent: %d\n",getpid());
         sleep(3);
      }
   }

   return 0;
}
