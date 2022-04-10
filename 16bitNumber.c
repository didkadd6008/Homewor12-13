#include<stdio.h>
#include<stdlib.h>

unsigned char CheckBit(unsigned int uValue){
  int count = sizeof(uValue);
   for (int i = 0; i < count; i++)
   {
      if (!!(uValue & (1 << i ) != 0))
      {
          return '1';
          break;
      }else{
          return '0';
      }
      
   } 
       
}
   
   

int main(){
    unsigned int mask;

    scanf("%x",&mask);
    if (CheckBit(mask) == '0')
    {
        printf("%X",0);
    }else{
        printf("%X",1);
    }
    
    return 0;
}