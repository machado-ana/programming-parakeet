#include <bits/stdc++.h>

// Somar digitos
// 123 % 10 = [3]
// 123/10 = 12 
// 12 % 10 = [2]
// 12/10 = 1
// 1 % 10 = [1]

bool ehAlegre(long int n) {
	long int soma = 0;
	long int n_old = n;
	
	
	soma += n%10;
	while (n > 0) {
		n /= 10;
		soma += n%10;
	}
	
	if (n_old % soma == 0)
		return true;

	return false;
}


int main() {
	long int n;
	
	scanf("%ld", &n);
	
	while (n) {
		int j = 0;
		
		while (ehAlegre(n+j) == false)
			j++;
		
		printf("%ld\n", n+j);
		
		scanf("%ld", &n);
	}
		
	return 0;
}
