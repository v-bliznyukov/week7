#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //assk user to specify the array size
  printf("Enter size of the array\n");
  int N;
  scanf("%d", &N);
  //allocate N contiguous cells of integer size
  int* array = (int*)calloc(N, sizeof(int));
  //if allocation is not successful
  if (array==NULL){
    printf("Memory allocation was not successful\n");
    exit(0);
  }
  //else set each array element with the increment of the prev element
  for(int i=0; i<N; i++){
    *(array+i)=i;
    
  }
  //print out array elements
  for(int i=0; i<N; i++){
    printf("Element %d: ", i);
    printf("%d\n",*(array+i)); 

  }
  //free the allocated memory
  free(array);

  return 0;
}