#include <bits/stdc++.h>

#define SZ 22
#define NUM 52

int main(void) {
	bool tautogram = true;
	int word = 0;
	int letter = 0;
	char txt[SZ*NUM];
	char f_txt[NUM][SZ];

	fgets(txt, SZ*NUM, stdin);
	txt[strlen(txt)-1] = '\0';

	while (strcmp(txt, "*") != 0) {
		// Inicializa o vetor
		for (int i=0; i<NUM; i++)
			for (int j=0; j<SZ; j++)
				f_txt[i][j] = 0;
		
		// Divide a frase em palavras
		for (int i=0; txt[i] != '\0'; i++) {
			if (txt[i] == ' ') {
				f_txt[word][letter] = '\0';
				word++;
				letter = 0;
				continue;
			}
			f_txt[word][letter] = txt[i];
			letter++;
		}
		f_txt[word][letter] = '\0';

		// Iniciais em minusculo
		for (int i=0; i<=word; i++) {
			if (f_txt[i][0] >= 'A' && f_txt[i][0] <= 'Z')
				f_txt[i][0] -= 'A' - 'a';
		}

		// Eh tautograma?
		for (int i=0; i<word; i++) {
			if (f_txt[i][0] != f_txt[i+1][0]) {
				tautogram = false;
				break;
			}
		}

		if (tautogram)
			puts("Y");
		else
			puts("N");

		fgets(txt, SZ*NUM, stdin);
		txt[strlen(txt)-1] = '\0';

		word = 0;
		letter = 0;
		tautogram = true;
	}

	return 0;
}
