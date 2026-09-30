#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    int op_marcada, op;

    cin >> n;
    while (n) {
        while (n--) {
            op_marcada = -1;
            for (int i=0; i<5; i++) {
                cin >> op;
                if (op<=127) {
                    if (op_marcada == -1)
                        op_marcada = i;
                    else
                        op_marcada = 5;
                }
            }
            if (op_marcada == 5 || op_marcada == -1)
                puts("*");
            else
                printf("%c\n", 'A'+op_marcada);
        }
        cin >> n;
    }
    return 0;
}
