#include<stdio.h>
int main()
{
  int score;
  char grade;
  printf("Enter score");
  scanf("%d",&score);
   if(score>=90 && score<=100)
     grade = 'A';
   else if(score>=80 && score<=89)
     grade = 'B';
   else if(score>=70 && score<=79)
     grade = 'C';
   else if(score>=60 && score<=69)
     grade = 'D';
   else if(score>=50 && score<=59)
     grade = 'E';
   else
     grade = 'F';
  printf("Grade: %c\n", grade)
  return 0;
}
