#include <stdio.h>
#include <stdint.h>

int lenght(int num){
    int counter = 0;
    while (num > 1)
    {
        num /= 10;
        counter ++;
    }
    return counter;
}

void Conv(int sValue, char *pBuffer){
    
}

int main(){
    int num;
    scanf("%d",&num);
    int size = lenght(num);
    char str[size];

}