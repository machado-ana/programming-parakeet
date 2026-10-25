#include <bits/stdc++.h>
using namespace std;

bool eh_vogal(char s) {
    return (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
}

int main(void) {
    string str;
    vector<char> vogais;
    bool risada = true;

    cin >> str;

    for (int i=0; i<str.size(); i++)
        if (eh_vogal(str[i])) vogais.push_back(str[i]);

    int l = 0, r = vogais.size()-1;
    while (l<(vogais.size()/2)) {
        if (!(vogais[l] == vogais[r])) {
            risada = false;
            break;
        }
        l++;
        r--;
    }

    if (risada)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}
