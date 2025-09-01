#include <stdio.h>
int main(){
    int i = 0;
    char arr[5] = {'a', 'b', 'c', '\b', '\0'};
    while(arr[i] != '\0'){
        putchar(arr[i]);
        i++;
    }
    return 0;
}
