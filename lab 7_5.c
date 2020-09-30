#include <stdio.h>
#include <stdlib.h>
int main(void) {
  //is a 2D array of chars, that doesnt have specified size, so we need to dynamically allocate memory
 char** s=malloc(sizeof(char*));
 //create an array of chars foo- address of H
 char foo[]= "Hello World";
 //the value in s (in pointer) is address of H
 *s = foo;
 //if we print just s, we would print the address of s, with "s is %s\n",*s we print all consequtive memory slots starting from address in *s untill we encounter /0
 printf("s is %s\n", *s);
 
 s[0]=foo;
 printf("s[0] is %s\n", s[0]);
  return 0;
}