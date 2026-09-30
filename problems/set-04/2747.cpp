#include <bits/stdc++.h>

int main(void) {
    for (int i=0; i<39; i++)
        printf("-");
    puts("");
    for (int i=0; i<5; i++) {
        printf("|");
        for (int j=0; j<37; j++) printf(" ");
        printf("|\n");
    }
    for (int i=0; i<39; i++)
        printf("-");
    puts("");
    return 0;
}
