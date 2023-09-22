#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int l = 0, w = 0, m = 0, L, S, index;
    string s = get_string("Text: ");
    // char s[200];
    // printf("Text: ");
    // scanf("%s", s);

    // TOTAL NO. OF LETTERS.
    for (int i = 0; s[i] != '\0'; i++)
    {
        // TOTAL NO. OF LETTERS.
        if (isalpha(s[i]))
        {
            l++;
        }
        // TOTAL NO. OF WORDS.
        else if (isblank(s[i]))
        {
            w++;
        }
        // TOTAL NO. OF SENTENCES.
        else if (s[i] == '!' || s[i] == '?' || s[i] == '.')
        {
            m++;
        }
    }
    // AVERAGE NO. OF LETTERS PER 100 WORDS.
    L = l / w * 100;

    // AVERAGE NO. OF SENTENCES PER 100 WORDS.
    S = m / w * 100;

    index = round(0.058 * L - 0.296 * S - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if(index <= 1)
    {
        printf("Below Grade 1\n");
    }
    else
    {
        printf("Grade %d", index);
    }
    
}