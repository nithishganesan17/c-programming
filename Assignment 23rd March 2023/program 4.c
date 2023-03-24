//4. Write a C program to find maximum occurring character in a string using loop. How to find highest frequency character in a string using loop in C programming. Program to find the highest occurring character in a string in C. Logic to find maximum occurring character in a string in C programming.
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[MAX_SIZE];
    int i, j, max, index;

    printf("Enter a string: ");
    gets(str);

    // Initialize frequency array to 0
    for(i=0; str[i]!='\0'; i++)
    {
        freq[i] = 0;
    }

    // Calculate frequency of each character
    for(i=0; str[i]!='\0'; i++)
    {
        freq[i]++;

        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[i] == str[j])
            {
                freq[i]++;
                str[j] = '0';
            }
        }
    }

    // Find maximum frequency
    max = freq[0];
    index = 0;
    for(i=1; str[i]!='\0'; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            index = i;
        }
    }

    printf("Maximum occurring character: %c\n", str[index]);

    return 0;
}

