#include <stdio.h>
#include  <string.h>

#define CNT 100

void Add(const char* p1, const char* p2, char* result){
    int size = strlen(p1);
    int size1 = strlen(p2);
int num[size], num1[size1];
int i = 0,number = 0,number1 = 0,sum,counter = 0,sum1;
char symbols[counter]; 

while (p1[i] != '\0')
{
    int nums = p1[i] - 48;
   num[i] = nums;
   i++;
}

i = 0;

while (p2[i] != '\0')
{
   int nums = p2[i] - 48;
   num1[i] = nums;
   i++;
}



for (i = 0; i < size; i++)
{
    number = number * 10 + num[i];
}

for (i = 0; i < size1; i++)
{
    number1 = number1 * 10 + num1[i];
}

sum = number1 + number;




strcpy(result,symbols);

printf("%d",sum);
}
int main(){
    char str[CNT];
    char str2[CNT];
    char num1[CNT];
    char num2[CNT];
    char result[CNT];
    scanf("%s",str);
    scanf("%s",str2);
    strcpy(num1,str);
    strcpy(num2,str2);
    Add(num1,num2,result);
   
}