#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void tighten(char lim1[], char lim2[]);

int main(void)
{
    int len;
    char lim1[MAXLINE];
    char lim2[MAXLINE];

    printf("Input string lim1:\n");
    while ((len = get_line(lim1, MAXLINE)) == 0)
        ;

    printf("Input string lim2:\n");
    while ((len = get_line(lim2, MAXLINE)) == 0)
        ;

    tighten(lim1, lim2);
    printf("Result is %s\n", lim1);

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 1)
            s[l++] = c;
    s[l] = '\0';

    return l;
}

/* This might need to be simplified */
void tighten(char lim1[], char lim2[])
{
    int i, j, k;

    i = 0;
    while (lim2[i] != '\0') {
        j = 0;
        while (lim1[j] != '\0') {
            if (lim1[j] == lim2[i]) {
                k = j;
                while ((lim1[k] = lim1[++k]) != '\0')
                    ;
            } else
                ++j;
        }
        ++i;
    }
}
