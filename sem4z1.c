#include <stdio.h>
#include <stdlib.h>


int from_hex_to_int(int input[], int length) {
    int num = 0;
    int sixteen = 1;
    for (int i = 1; i <= length; i++) {
        num += input[length-i] * sixteen;
        sixteen *= 16;
    }

    return  num;
}


int main() {
    char ch;
    int length = 0;
    int positive = 1;
    int input[1001];
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'F') ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'f') input[length] = ch - 87;
        else input[length] = ch - 48;

        length++;
    }

    int num = from_hex_to_int(input, length);

    printf("%d", num);
}
