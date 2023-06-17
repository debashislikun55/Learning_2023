#include <stdio.h>
#include <ctype.h>
int findCharacterType(char );
int findCharacterType(char ch) {
    if (isupper(ch)) {
        return 1;
    } else if (islower(ch)) {
        return 2;
    } else if (isdigit(ch)) {
        return 3;
    } else if (isprint(ch)) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    int type = findCharacterType(character);
    printf(" %d\n", type);
    return 0;
}
