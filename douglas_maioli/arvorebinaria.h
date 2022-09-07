#include <iostream>
#include "aluno.h"

struct No{
	Aluno aluno;
	No* filhoEsquerda;
	No* filhoDireita;

};

class ArvoreBinariadeBusca{  //BST = Binary Search Tree
	private:
		No* raiz;

	public:
		ArvoreBinariadeBusca();
		~ArvoreBinariadeBusca();
		void deletarArvore(No* Noatual);
		No* obterRaiz();
		bool estaVazio();
		bool estaCheio();
		void inserir(Aluno aluno);
		void remover(Aluno aluno);
		void buscar(Aluno aluno, bool& busca);
		void imprimirPreordem(No* Noatual);
		void imprimirEmordem(No* Noatual);
		void imprimirPosordem(No* Noatual);
};