// Complete inserirTarefa (aloca com malloc e insere mantendo a lista ordenada por prioridade crescente) e imprimirLista.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tarefa {
    char nome[30];
    int prioridade;
    struct Tarefa *prox;
} Tarefa;

Tarefa *inserirTarefa(Tarefa *inicio, char nome[], int prioridade) {
        Tarefa *novo = malloc(sizeof(Tarefa));
    if (novo == NULL) {
        return inicio;   // sem memória: lista fica como estava
    }

    strncpy(novo->nome, nome, sizeof(novo->nome) - 1);
    novo->nome[sizeof(novo->nome) - 1] = '\0';
    novo->prioridade = prioridade;
    novo->prox = NULL;

    if (inicio == NULL || prioridade < inicio->prioridade) {
        novo->prox = inicio;
        return novo;  
    }

    Tarefa *atual = inicio;
    while (atual->prox != NULL && atual->prox->prioridade <= prioridade) {
        atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;
    return inicio;
}

void imprimirLista(Tarefa *inicio) {
    // TODO: percorrer a lista e imprimir "nome (prioridade)" para cada nó
     Tarefa *p = inicio;
    while (p != NULL) {
        printf("%s (%d)\n", p->nome, p->prioridade);
        p = p->prox;
    }
}

int main() {
    Tarefa *fila = NULL;
    Tarefa *p;

    fila = inserirTarefa(fila, "Corrigir bug critico", 1);
    fila = inserirTarefa(fila, "Responder e-mails", 5);
    fila = inserirTarefa(fila, "Preparar aula", 2);
    fila = inserirTarefa(fila, "Revisar artigo", 3);

    imprimirLista(fila);

    while (fila != NULL) {
        p = fila;
        fila = fila->prox;
        free(p);
    }
    return 0;
}
