#include <stdio.h>
int main() {
  printf("RA2211042010041\n");
  int months, days;
  printf("Enter days : ");
  scanf("%d",&days);
  months=days/30;
  days=days%30;
  printf("Months = %d Days = %d", months, days);
}
