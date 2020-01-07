#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 10

void generateArray (int data[]);
int checkArray (int data[]);
void printArray (int data[]);

int main(){
   int array[100];
   generateArray(array);
   checkArray(array);
   assert((checkArray(array))== -2);
}

void generateArray (int data[]){
    for (int i = 0; i < MAX; i++){
           data[i] = rand();
           printf("%d ", data[i]);
    }
    printf("\n");
}
int checkArray (int data[]){
    if (MAX == 1 || MAX == 0){
        return 2;
    }
       else{
          for (int i = 0; i < MAX; i++){
             if (data[i] > data[i+1]){
                return -2;
             }
          }
       }
}
void printArray (int data[]){
    for(int i = 0; i < MAX; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
