#include<stdio.h>

int main()
{
  printf("RA2211042010041 \n");
  int radius, length, CSA;
  printf("Radius: ");
  scanf("%d", &radius);
  printf("Length: ");
  scanf("%d", &length);
  
  CSA = 3.14*radius*length;
  printf("%d", CSA);
}
