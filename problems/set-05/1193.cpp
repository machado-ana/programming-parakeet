#include <bits/stdc++.h>
using namespace std;

int convertBase(int base, string& num_str) {
    int res = 0, casa = 0;
    for (int i=num_str.size()-1; i>=0; i--) {
        int n;
        if (base == 16 && num_str[i]>='a' && num_str[i]<='f')
            n = num_str[i] - 'a' + 10;
        else
            n = num_str[i] - '0';
        res += n*pow(base, casa);
        casa++;
    }
    return res;
}

int bin2Dec(string& num) {
    return convertBase(2, num);
}

int hex2Dec(string& num) {
    return convertBase(16, num);
}

int str2Dec(string& num) {
    return convertBase(10, num);
}

int main(void) {
    int t;

    cin >> t;
    for (int i=0; i<t; i++) {
        printf("Case %d:\n", i+1);

        string str;
        string base;
        int num;
        cin >> str >> base;
        if (base == "bin") {
            num = bin2Dec(str);
            printf("%d dec\n", num);
            printf("%x hex\n", num);
        } else if (base == "dec") {
            num = str2Dec(str);
            printf("%x hex\n", num);
            printf("%b bin\n", num);
        } else {
            num = hex2Dec(str);
            printf("%d dec\n", num);
            printf("%b bin\n", num);
        }
        puts("");
    }
    return 0;
}
