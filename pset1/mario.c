#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    
    do 
    {
        printf("Please input the pyramid height:\n");
        height = GetInt(); 
        if (height == 0) return 0;
    }
    while (height < 1 || height > 23);
    
    for(int i = 0; i < height; i++) 
    {
        //This loop print required white spaces
        for(int j = 0; j < height-i-1; j++)
        {
            printf("%s", " ");
        }
            
        //This loop print "#" character
        for(int k = 0; k < i+2; k++)
        {
            printf("#");
        }
            
        printf("\n");
    }
    return 0;
}