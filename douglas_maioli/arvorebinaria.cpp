#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;


	ArvoreBinariadeBusca::ArvoreBinariadeBusca()
	{
		raiz = NULL;

	}

	ArvoreBinariadeBusca::~ArvoreBinariadeBusca(){

	}

	void ArvoreBinariadeBusca::deletarArvore(No* Noatual){

	}

	No* ArvoreBinariadeBusca::obterRaiz()
	{
		return raiz;
	}

	bool ArvoreBinariadeBusca::estaVazio()
	{
		return (raiz == NULL);
	}

	bool ArvoreBinariadeBusca::estaCheio()
	{
		try{
			No* temp = new No;
			delete temp;
			return false;

		} catch(bad_alloc exception){
			return true;
		}
	}

	void ArvoreBinariadeBusca::inserir(Aluno novoAluno)
	{
		if (estaCheio()){
			cout << "A arvore esta cheia!\n";
			cout << "Nao foi possivel inserir este elemento!\n";

		} else{
			No* NoNovo = new No;
			NoNovo -> aluno = novoAluno;
			NoNovo -> filhoDireita = NULL;
			NoNovo -> filhoEsquerda = NULL;
			if (raiz == NULL){
				raiz = NoNovo;
			} else{
				No* temp = raiz;
				while (temp != NULL){
					if (aluno.obterRa() < temp->aluno.obterRa()){
						if (temp->filhoEsquerda == NULL){
							temp->filhoEsquerda = NoNovo;
							break;

						} else{
							temp = temp->filhoEsquerda;
						}
					
					} else{
						if (temp->filhodireita == NULL){
							temp->filhodireita = NoNovo;
						
						} else{
							temp = temp->filhodireita;
						}


					}
				}
			}

		}


	}

	void ArvoreBinariadeBusca::remover(Aluno aluno){

	}

	void ArvoreBinariadeBusca::buscar(Aluno aluno, bool& busca){

	}

	void ArvoreBinariadeBusca::imprimirPreordem(No* Noatual){

	}

	void ArvoreBinariadeBusca::imprimirEmordem(No* Noatual){

	}

	void ArvoreBinariadeBusca::imprimirPosordem(No* Noatual){

	}
