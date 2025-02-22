#include <stdio.h>

int main(){
    int arr[5]= {2, 4, 6, 8 ,10}, i;
    for(i=0; i<5; i++){
        printf("La direccion de arr[%d] esta en %p\n" ,i, &arr[i]);
    }
    return 0;
}
