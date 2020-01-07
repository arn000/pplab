//swap func
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(){
    int a1 = 8, b1 = 12;
    swap(&a1, &b1);

}
void swap(int *a, int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
