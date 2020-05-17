#include <cs50.h>
#include <stdio.h>

void spaces(int height, int i);
void hashes(int i);

int main(void)
{
  // Declare data-style and variable
  int height;

  // Prompt user to input a number between 1 and 8 inclusive
  do
  {
      height = get_int("Height: ");
  }
  while (height < 1 || height > 8);

  // Conditional that determines pyramid from height
  for (int i = 0; i < height; i++)
  {
      spaces(height, i);
      hashes(i);
      printf("  ");
      hashes(i);
      printf("\n");
  }
}

// Spaces function
void spaces(height, i)
{
    for (int j = height; j > i + 1; j--)
    {
        printf(" ");
    }
}

// Hashes function
void hashes(i)
{
    for (int k = 0; k <= i; k++)
    {
        printf("#");
    }
}
