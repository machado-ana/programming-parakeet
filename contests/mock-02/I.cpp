#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c, d;
    int saida;

    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF) {
        if (b==1 && c==2 && d==3) saida = 1;
        else if (a==1 && c==1 && d==2) saida = 2;
        else if (a==2 && b==1 && d==1) saida = 3;
        else saida = 4;
        cout << saida << "\n";
    }

    return 0;
}
