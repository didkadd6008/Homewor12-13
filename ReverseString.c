#include <stdio.h>

#define CNT 100

char* mystrcpy(char* dest, const char* src){
    if (dest == NULL){
        return NULL;
    }
    int i = 0;
    while (src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

size_t mystrlen(const char* str){
    size_t cnt = -1;
    while (*(str + ++cnt));  
    return cnt;
}

void reverse(char* rev,int num){
    for (int i = num; i >= 0; i--)
    {
        printf("%c",rev[i]);
    }
    
}

int main(){
    char str[CNT];
    scanf("%s",str);
    int num = mystrlen(str);
    char rev[num];
    mystrcpy(rev,str);
    reverse(rev,num);
    
   return 0;
    
}