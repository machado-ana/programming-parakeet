#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    map<string, array<string, 2>> rules {
        {"pedra", {"tesoura", "lagarto"}},
        {"papel", {"pedra", "spock"}},
        {"tesoura", {"papel", "lagarto"}},
        {"lagarto", {"papel", "spock"}},
        {"spock", {"tesoura", "pedra"}}
    };

    cin >> t;
    while (t--) {
        string r, s;
        cin >> r >> s;
        if (r == s) {
            puts("empate");
        } else {
            array<string, 2> losers = rules[r];
            if (find(losers.begin(), losers.end(), s) != losers.end())
                puts("rajesh");
            else
                puts("sheldon");
        }
    }

    return 0;
}
