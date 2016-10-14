#include <cs50.h>
#include <stdio.h>

int main (void) 
{
  printf("How much time do you use  for shower? Please input the number of minutes:\n");
  int time = GetInt();

  int bottles = 12;
  int result = bottles * time;
  printf("minutes: %i\n", time);
  printf("bottles: %i\n", result);
}
