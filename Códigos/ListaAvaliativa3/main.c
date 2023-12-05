#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_SIZE 1000

struct Produto {
    int cod;           
    char desc[STR_SIZE]; 
    int qntd;           
    float preco;
    struct Produto* proximo;
};

struct Produto* lista;

struct Produto* produto_novo(int cod, const char* desc, int qntd, float preco) {
    struct Produto* novo = (struct Produto*)malloc(sizeof(struct Produto));
    novo->cod = cod;  
    strncpy(novo->desc, desc, sizeof(novo->desc));  
    novo->qntd = qntd;  
    novo->preco = preco;
    novo->proximo = NULL;
    return novo;
}

void produtosInicio(struct Produto** primeiro) {
    *primeiro = NULL;
}

void listarProduto(struct Produto** primeiro, int cod, const char* desc, int qntd, float preco) {
    struct Produto* novo = produto_novo(cod, desc, qntd, preco);
    novo->proximo = *primeiro;
    *primeiro = novo;
}

void apagarProduto(struct Produto** primeiro, int cod) {
    if (*primeiro == NULL) {
        return;
    }
    struct Produto* temp = *primeiro;
    if (temp->cod == cod) {  
        *primeiro = temp->proximo;
        free(temp);
        return;
    }
    struct Produto* ant = NULL;
    while (temp != NULL && temp->cod != cod) {  
        ant = temp;
        temp = temp->proximo;
    }
    if (temp == NULL) {
        printf("Não foi possível remover o produto! Código inválido.\n");
        return;
    }
    ant->proximo = temp->proximo;
    free(temp);
    printf("Produto com codigo %d foi removido do estoque.\n", cod); 
}

void produtosListado(struct Produto* primeiro) {
    printf(" | Produtos em estoque | \n");
    struct Produto* temp = primeiro;
    while (temp != NULL) {
        printf("Codigo: %d, Descricao: %s, Quantidade: %d, Preco: %.2f\n", temp->cod, temp->desc, temp->qntd, temp->preco);
        temp = temp->proximo;
    }
    printf("--- \n");
}

void mostrarCod(struct Produto* primeiro, int cod) {
    struct Produto* temp = primeiro;
    while (temp != NULL && temp->cod != cod) {  
        temp = temp->proximo;
    }

    if (temp != NULL) {
        printf("Codigo: %d, Descricao: %s, Quantidade: %d, Preco: %.2f\n", temp->cod, temp->desc, temp->qntd, temp->preco);
    } else {
        printf("Não foi encontrado produto com o código %d\n", cod);
    }
}

void produtos_limpar(struct Produto** primeiro) {
    struct Produto* temp = *primeiro;
    while (temp != NULL) {
        struct Produto* prox = temp->proximo;
        free(temp);
        temp = prox;
    }
    *primeiro = NULL;
}

int ler_codigo() {
    int cod = 0;
    while (1) {
        printf("Informe o codigo do produto: ");
        int result = scanf("%d", &cod);
        if (result == 1 && cod > 0) {
            break;
        } else {
            printf("Código inválido! Tente novamente.\n");
            while (getchar() != '\n');  
        }
    }
    return cod;
}

int ler_quantidade() {
    int qntd = 0;
    while (1) {
        printf("Informe a quantidade do produto: ");
        int result = scanf("%d", &qntd);
        if (result == 1 && qntd > 0) {
            break;
        } else {
            printf("Quantidade inválida! Tente novamente.\n");
            while (getchar() != '\n');  
        }
    }
    return qntd;
}

float ler_preco() {
    float preco = 0.0f;
    while (1) {
        printf("Insira o preco do produto: ");
        int result = scanf("%f", &preco);
        if (result == 1 && preco > 0) {
            break;
        } else {
            printf("Preço inválido! Tente novamente.\n");
            while (getchar() != '\n');  
        }
    }
    return preco;
}

void adicionar_produto() {
    int cod = ler_codigo();
    int qntd = ler_quantidade();
    float preco = ler_preco();
    getchar();  
    char temp_desc[STR_SIZE];
    printf("Informe a descricao: ");
    fgets(temp_desc, STR_SIZE, stdin);
    temp_desc[strcspn(temp_desc, "\n")] = '\0';
    listarProduto(&lista, cod, temp_desc, qntd, preco);
    printf("\n  Produto adicionado! \n");
    mostrarCod(lista, cod);
}



void impressaoRelatorio(){
    produtosListado(lista);
}

void pesquisarCod() {
    int cod = ler_codigo();
    mostrarCod(lista, cod);
}

void apagarCod() {
    int cod = ler_codigo();
    apagarProduto(&lista, cod);
}

void mostra_menu() {
    while (1) {
        printf("\n~~~~~~ Controle de estoque ~~~~~~\n\n");
        printf("Escolha uma opção:\n\n");
        printf("1 - Relatorio dos produtos\n");
        printf("2 - Adicionar produto\n");
        printf("3 - Pesquisar produto\n");
        printf("4 - Remover produto\n");
        printf("0 - Sair do menu\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        int escolha = 0;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
              impressaoRelatorio();
                break;
            case 2:
                adicionar_produto();
                break;
            case 3:
              pesquisarCod();
                break;
            case 4:
                apagarCod();
                 break;
            case 0:
                produtos_limpar(&lista);
                printf("Programa encerrado.\n");
                return;
                default:
                printf("Erro! Insira uma opção válida.\n\n");
             }
           }
        }

int main(){
    produtosInicio(&lista);
    mostra_menu();
    return 0;
}