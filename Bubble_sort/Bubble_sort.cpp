#include <stdio.h>

int main(){
    int i, j, temp; // 변수를 3개 밖에 안쓴다.
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}