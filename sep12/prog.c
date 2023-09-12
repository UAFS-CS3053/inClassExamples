#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

struct person{
   int id;
   char fname[SIZE];
   char lname[SIZE];
};
typedef struct person Person;

//** Function Prototypes **
void printPerson(Person *perptri);
void printPersonByValue(Person person1);

int main(int argc, char *argv[]){
   struct person person1;
   Person person2;
   Person *person3;

   //Allocated on the Heap
   person3 = malloc(sizeof(Person));
   person3->id=3;
   strcpy(person3->fname,"Jack");
   strcpy(person3->lname,"Jones");
   

   person1.id=1;
   strcpy(person1.fname,"Joe");
   strcpy(person1.lname,"Smith");
   printPerson(&person1);
   printPersonByValue(person1);
   printPerson(person3);

   free(person3);
   return 0;
}

void printPersonByValue(Person person1){
   printf("Size: %ld\n",sizeof(person1));
   printf("Id: %d\n",person1.id);
   printf("FName: %s\n",person1.fname);
   printf("LName: %s\n",person1.lname);
}

void printPerson(Person *perptr){
   printf("Address: %p\n",perptr);
   printf("Size: %ld\n",sizeof(*perptr));
   printf("Id: %d\n",perptr->id);
   printf("FName: %s\n",perptr->fname);
   printf("LName: %s\n",perptr->lname);
}
