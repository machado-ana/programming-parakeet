       --- Aula 02: Range Query ---

1. Vetor de soma de prefixo
- É um vetor que armazena o valor da soma
dos valores do vetor até determinado índice.
- Usamos quando não é necessário dar update 
nos dados.

- Ex 01:
	indice [0 1 2 3 4]
	 vetor [1 2 3 1 1]
	   sum [1 3 6 7 8]

- Ex 02:
	Usando o mesmo vetor do Ex 01...
	sum(0, 3) = 7;
	sum(2, 4) = sum(0, 4)-sum(0, 1) = 5; 

2. Segment tree
- É uma estrutura de dados que permite 
realizar range queries muito mais facil-
mente. Não entendi muito, usa uns trem
de OOP;
- As folhas representam os valores do vetor;
- Subindo a árvore, cada nó representa a soma
dos nós para os quais ela aponta (l, r).

- Ex 01:
	segment_tree *tree = NULL;
	tree = build(tree, start, end);
	soma = query(tree, l, r);

- Ex 02: atualizando um valor
	update(indice, valor);

- Ex 03:
	criar um vetor com o dobro do tamanho
do vetor que queremos fazer é uma "arvore"
mais simples.
	da metade do vetor pra frente, colocamos
os valores do vetor.
	numeramos a arvore de cima pra baixo, 
da direita pra esquerda.
	v[i*2] é o filho da esquerda
	v[i*2 + 1] é o filho da direita

	questao K do simulado usava segment-tree  
