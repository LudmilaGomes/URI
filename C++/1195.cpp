#include <stdio.h>
#include <iostream>

/*
Em computação, a árvores binária de busca ou árvore binária de
pesquisa é uma estrutura baseada em nós (nodos), onde todos os
nós da subárvore esquerda possuem um valor numérico inferior ao
nó raiz e todos os nós da subárvore direita possuem um valor
superior ao nó raiz (e assim sucessivamente). O objetivo desta
árvore é estruturar os dados de forma flexível, permitindo a
busca binária de um elemento qualquer da árvore.

A grande vantagem das árvores de busca binária sobre estruturas
de dados convencionais é que os algoritmos de ordenação (percurso
infixo) e pesquisa que as utilizam são muito eficientes.

Para este problema, você receberá vários conjuntos de números
e a partir de cada um dos conjuntos, deverá construir uma
árvore binária de busca.

Entrada
A entrada contém vários casos de teste. A primeira linha da
entrada contém um inteiro C (C ≤ 1000), indicando o número
de casos de teste que virão a seguir. Cada caso de teste é
composto por 2 linhas. A primeira linha contém um inteiro N
(1 ≤ N ≤ 500) que indica a quantidade de números que deve
compor cada árvore e a segunda linha contém N inteiros distintos
e não negativos, separados por um espaço em branco.

Saída
Cada linha de entrada produz 3 linhas de saída. Após construir
a árvore binária de busca com os elementos de entrada, você
deverá imprimir a mensagem "Case n:", onde n indica o número
do caso de teste e fazer os três percursos da árvore: prefixo,
infixo e posfixo, apresentando cada um deles em uma linha com
uma mensagem correspondente conforme o exemplo abaixo, separando
cada um dos elementos por um espaço em branco.

Obs: Não deve haver espaço em branco após o último item de
cada linha e há uma linha em branco após cada caso de teste,
inclusive após o último.

Case 1:
Pre.: 5 2 7
In..: 2 5 7
Post: 2 7 5

Case 2:
Pre.: 8 3 1 6 4 7 10 14 13
In..: 1 3 4 6 7 8 10 13 14
Post: 1 4 7 6 3 13 14 10 8


Case 1:
Pre.: 5 2 7
In..: 2 5 7
Post: 2 7 5

Case 2:
Pre.: 8 3 1 6 4 7 10 14 13
In..: 1 3 4 6 7 8 10 13 14
Post: 1 4 7 6 3 13 14 10 8

*/

using namespace std;

class No
{

private:
    int conteudo;
    No *esq;
    No *dir;

public:
    No();
    virtual ~No();

    int getConteudo();
    No *getEsq();
    No *getDir();

    void setConteudo(int conteudo);
    void setEsq(No *esq);
    void setDir(No *dir);
};

No::No()
{
    esq = NULL;
    dir = NULL;
}

No::~No()
{
}

int No::getConteudo()
{
    return conteudo;
}

No *No::getEsq()
{
    return esq;
}

No *No::getDir()
{
    return dir;
}

void No::setConteudo(int conteudo)
{
    this->conteudo = conteudo;
}

void No::setEsq(No *esq)
{
    this->esq = esq;
}

void No::setDir(No *dir)
{
    this->dir = dir;
}

class ArvoreBinariaPesquisa
{
private:
    No *raiz;

public:
    ArvoreBinariaPesquisa();
    virtual ~ArvoreBinariaPesquisa();

    bool insere(int valor);
    void limpar();
    void printPreOrder_aux(No *T);
    void printPreOrder();
    void printInOrder_aux(No *T);
    void printInOrder();
    void printPosOrder_aux(No *T);
    void printPosOrder();
};

ArvoreBinariaPesquisa::ArvoreBinariaPesquisa()
{
    raiz = NULL;
}

ArvoreBinariaPesquisa::~ArvoreBinariaPesquisa()
{
}

void ArvoreBinariaPesquisa::limpar()
{
    raiz = NULL;
}

bool ArvoreBinariaPesquisa::insere(int valor)
{

    No *novoNo = new No();
    novoNo->setConteudo(valor);
    novoNo->setEsq(NULL);
    novoNo->setDir(NULL);

    if (raiz == NULL)
    {
        raiz = novoNo;
        return true;
    }

    No *aux = raiz;
    No *p = NULL;
    while (aux != NULL)
    {
        p = aux;
        if (valor == aux->getConteudo())
            return false;

        if (valor < aux->getConteudo())
            aux = aux->getEsq();
        else
            aux = aux->getDir();
    }

    if (valor < p->getConteudo())
        p->setEsq(novoNo);
    else
        p->setDir(novoNo);

    return true;
}

void ArvoreBinariaPesquisa::printPreOrder_aux(No *T)
{
    if (T != NULL)
    {
        printf(" %i", T->getConteudo());
        printPreOrder_aux(T->getEsq());
        printPreOrder_aux(T->getDir());
    }
}

void ArvoreBinariaPesquisa::printPreOrder()
{
    if (raiz != NULL)
        printPreOrder_aux(raiz);
}

void ArvoreBinariaPesquisa::printInOrder_aux(No *T)
{
    if (T != NULL)
    {
        printInOrder_aux(T->getEsq());
        printf(" %i", T->getConteudo());
        printInOrder_aux(T->getDir());
    }
}

void ArvoreBinariaPesquisa::printInOrder()
{
    if (raiz != NULL)
        printInOrder_aux(raiz);
}

void ArvoreBinariaPesquisa::printPosOrder_aux(No *T)
{
    if (T != NULL)
    {
        printPosOrder_aux(T->getEsq());
        printPosOrder_aux(T->getDir());
        printf(" %i", T->getConteudo());
    }
}

void ArvoreBinariaPesquisa::printPosOrder()
{
    if (raiz != NULL)
        printPosOrder_aux(raiz);
}

int main()
{
    int n_casos_teste, qtd_nos, valor_no, n_caso_atual = 1;
    ArvoreBinariaPesquisa arvore;

    scanf("%d", &n_casos_teste);

    while (n_casos_teste--)
    {
        scanf("%d", &qtd_nos);
        for (int i = 0; i < qtd_nos; i++)
        {
            scanf("%d", &valor_no);
            arvore.insere(valor_no);
        }

        printf("Case %d:\n", n_caso_atual);
        printf("Pre.:");
        arvore.printPreOrder();
        printf("\n");
        printf("In..:");
        arvore.printInOrder();
        printf("\n");
        printf("Post:");
        arvore.printPosOrder();
        printf("\n\n");

        arvore.limpar();
        n_caso_atual++;
    }

    return 0;
}