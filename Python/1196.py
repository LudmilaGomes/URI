# time limit exceeded

# definimos a classe nó
class No:
    def __init__(self, valor):
        self.valor = valor      # conteúdo do nó
        self.esquerda = None    # aponta para o nó da esquerda
        self.direita = None     # aponta para o nó da direita

# definimos a classe Árvore Binária de Pesquisa
class ArvoreBinariaPesquisa:
    def __init__(self):
        self.raiz = None        # indica nó raiz da árvore; a partir dele, buscamos os outros nós
        self.lista_ordem = []   # a árvore guarda uma lista para pre-ordem, in-ordem e pos-ordem

    def arvoreLimpar(self):
        self.raiz = None
        return True
    
    # verificamos se a árvore está vazia; retorna True se a árvore está vazia; False, caso contrário
    def arvoreVazia(self):
        if(self.raiz == None):
            return True
        else:
            return False

    # inserimos um novo elemento na árvore; retorna True se inserção tiver sido feita com sucesso; False, caso contrário
    def inserir(self, valor):
        novo_no = No(valor)

        # se a árvore está vazia, o novo nó é a raiz
        if self.arvoreVazia():
            self.raiz = novo_no
            return True
        
        # buscamos na árvore a posição adequada para inserção do novo nó
        auxiliar = self.raiz
        posicao = None

        # verificamos se o valor do novo elemento já existe na árvore
        while(auxiliar != None):
            posicao = auxiliar

            # se existe, a inserção não acontece
            if(valor == auxiliar.valor):
                return False
            
            # comparamos os valores para saber se seguimos para a direita ou esquerda nos ramos da árvore
            if(valor < auxiliar.valor):
                auxiliar = auxiliar.esquerda
            else:
                auxiliar = auxiliar.direita

        # entramos nesse if se o valor não existe e o inserimos
        if(valor < posicao.valor):
            posicao.esquerda = novo_no
        else:
            posicao.direita = novo_no

        return True
    
    # salva o conteúdo de uma árvore em pré-ordem
    def pre_ordem(self):
        self.lista_ordem = resultado = []
        self._pre_ordem_(self.raiz, resultado)
    
    # auxilia o método pre_ordem
    def _pre_ordem_(self, no, resultado):
        if no:
            resultado.append(no.valor)
            self._pre_ordem_(no.esquerda, resultado)
            self._pre_ordem_(no.direita, resultado)

    # salva o conteúdo de uma árvore em pos-ordem
    def pos_ordem(self):
        self.lista_ordem = resultado = []
        self._pos_ordem_(self.raiz, resultado)

    # auxilia o método pos_ordem
    def _pos_ordem_(self, no, resultado):
        if no:
            self._pos_ordem_(no.esquerda, resultado)
            self._pos_ordem_(no.direita, resultado)
            resultado.append(no.valor)

    # salva o conteúdo de uma árvore em in-ordem
    def in_ordem(self):
        self.lista_ordem = resultado = []
        self._in_ordem_(self.raiz, resultado)

    # auxilia o método in_ordem
    def _in_ordem_(self, no, resultado):
        if no:
            self._in_ordem_(no.esquerda, resultado)
            resultado.append(no.valor)
            self._in_ordem_(no.direita, resultado)

    def retorna_lista(self):
        return self.lista_ordem
    
arvore = ArvoreBinariaPesquisa()
casos_teste = int(input())
caso_teste_atual = 1

while(casos_teste):

    qtd_nos = int(input())

    valor_no = input().split()
    for i in valor_no:
        arvore.inserir(int(i))

    print("Case %d:" % (caso_teste_atual))
    caso_teste_atual += 1

    arvore.pre_ordem()
    print("Pre.: ", end="")
    for i in arvore.retorna_lista():
        print("%d " % (i), end="")

    arvore.in_ordem()
    print("%sIn..: " % ("\n"), end="")
    for i in arvore.retorna_lista():
        print("%d " % (i), end="")

    arvore.pos_ordem()
    print("%sPos.: " % ("\n"), end="")
    for i in arvore.retorna_lista():
        print("%d " % (i), end="")

    arvore.arvoreLimpar()

    casos_teste -= 1