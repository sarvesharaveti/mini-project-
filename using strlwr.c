#include<stdio.h>  
#include<string.h>
int main(){    
    printf("RA2211042010041\n")
  char str[20];    
  printf("Enter string: ");    
  gets(str);   
  printf("String is: %s",str);    
  printf("\nLower String is: %s",strlwr(str));    
 return 0;    
}    
