
//@file RewriteValuesInArray
//@author Karina Alcantara Segura
//This program replaces the numbers 3 by 5 and 6 by 8 in an array.

#include <stdio.h>
#define N 15

int array[N] = {6,4,7,3,1,3,6,9,3,1,6,4,9,6,3};

int rewrite(int a){
    if (a % 2 == 0){
        a = 8;
        return a;
    }
    a = 5;
    return a;
}

void search(int *a, int size)
{
    int busqueda = 3;
    int busqueda2 = 6;

    for(int i = 0; i < size; i++){
        if (a[i] == busqueda)
        {
            a[i] = rewrite(a[i]);
            
        }else if (a[i] == busqueda2)
        {
            a[i] = rewrite(a[i]);
        }
    }
} 

int main(){
    search(array, N);
    return 0;
}
