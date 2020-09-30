#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//custom realloc function
void* reallocate(void* ptr,int init_size, int newsize){
 //if pointer to array is null
 if (ptr==NULL){
   //allocate memory for mew array
   return malloc(newsize);}
   //if new size is 0
 else if(newsize==0){
   //free the ild array
   free(ptr);
   return NULL;
 }
 //if the new size is less than the old one, return same pointer
 else if(init_size>=newsize){
   return ptr;
 }

 else {
   //else, create a pointer to new array,allocate memory
   void* ptr1= malloc(newsize);
   //if allocation was successfull
   if(ptr1){
     //cope all old array elemets to new allocated array
     memcpy(ptr1, ptr, init_size);
     //free allocated memory pointed by ptr
     free(ptr);
   }
   //return a pointer to new array
   return ptr1;
 }

 }

int main(void) {
  //ask user to input array size
 printf("\nEnter initial array size: ");
 int n1;
 scanf("%d",&n1);
 //allocate memory for specified size
  int* a1 = malloc(n1*sizeof(int));
  //print array elements
  for(int i=0; i<n1; i++){
   printf("%d ",*(a1+i));
  }
  printf("\n");
  //ask user to input new array size
  printf("\nEnter new array size: ");
 int n2;
  scanf("%d",&n2);
  //call reallocate function with new size
  a1=reallocate(a1,n1*sizeof(int), n2*sizeof(int));
  //print out elemts of new array
  for(int i=0; i<n2; i++){
    printf("%d ",*(a1+i));
  }
   printf("\n");
  return 0;
}