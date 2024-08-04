#include <stdio.h>
#include <ctype.h>
#include <string.h>

int scrabble(char a) {
    switch(a) {
    case 'A':
        return 1;
    case 'B':
        return 3;
    case 'C':
        return 3;
    case 'D':
        return 2;
    case 'E':
        return 1;
    case 'F':
        return 4;
    case 'G':
        return 2;
    case 'H':
        return 4;
    case 'I':
        return 1;
    case 'J':
        return 8;
    case 'K':
        return 5;
    case 'L':
        return 1;
    case 'M':
        return 3;
    case 'N':
        return 1;
    case 'O':
        return 1;
    case 'P':
        return 3;
    case 'Q':
        return 10;
    case 'R':
        return 1;
    case 'S':
        return 1;
    case 'T':
        return 1;
    case 'U':
        return 1;
    case 'V':
        return 4;
    case 'W':
        return 4;
    case 'X':
        return 8;
    case 'Y':
        return 4;
    case 'Z':
        return 10;
    default:
        return 0;
}
}

int main(void) {
    char word1[100];
    printf("Player 1 term: ");
    scanf("%s", word1);
    int size1 = strlen(word1);

    char word2[100];
    printf("Player 2 term: ");
    scanf("%s", word2);
    int size2 = strlen(word2);

    int sum1 = 0;
    int sum2 = 0;
    char a, b;
    for(int i = 0; i < size1; i++) {
        a = toupper(word1[i]);
       sum1 += scrabble(a);
    }

     for(int i = 0; i < size2; i++) {
       sum2 += scrabble(toupper(word2[i]));
    }

    if(sum1 == sum2) {
        printf("Tie!\n");
    }
    else if(sum1 > sum2) {
        printf("Player 1 wins!\n");
    }
    else{
        printf("Player 2 wins!\n");
    }
}