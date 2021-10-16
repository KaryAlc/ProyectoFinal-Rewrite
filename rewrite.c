
//@file RewriteValuesInArray
//@author Karina Alcantara Segura
//This program replaces the numbers 3 by 5 in an array.

#include <stdio.h>
#define N 10

int array[N] = {5,4,7,3,8,3,6,9,3,1};

int rewrite(int a){
    a = 5;
    return a;
}

void search(int *a, int size)
{
    int busqueda = 3;

    for(int i = 0; i <= size; i++){
        if (a[i] == busqueda){
            a[i] = rewrite(a[i]);
        }
    }
}

int main(){
    search(array, N);
}