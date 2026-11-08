#include <stdio.h>

int valores[10];
int topo = -1;

int vazia()
{
    if (topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;    
    }
}

void push(int elementos)
{
    if(topo >= 9)
    {
        printf("A pilha está cheia! Remove elementos para inserir mais!");
        return;
    }
    
    topo++;
    valores[topo] = elementos;
}

void pop()
{
    if(vazia())
    {
        printf("Não existe elementos na pilha para remover!");
        return;
    }
    
    int elementos = valores[topo];
    topo--;
    
}

int main()
{
    
    int opcao, num1, num2, resultado;
    do
    {
        printf("\nEscolha uma das opções abaixo:\n");
        printf("1 - Ver o elemento do topo da pilha!\n");
        printf("2 - Ver todos os elementos da pilha!\n");
        printf("3 - Realizar uma operação de adição e o resultado virar um push para pilha!\n");
        printf("4 - Realizar uma operação de subtração e o resultado virar um push para pilha!\n");
        printf("5 - Realizar uma operação de divisão e o resultado virar um push para pilha!\n");
        printf("6 - Realizar uma operação de multiplicação e o resultado virar um push para pilha!\n");
        printf("7 - Remova o último elemento da pilha!\n");
        printf("0 - Sair\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 0:
                printf("\nAté logo!");
                break;
            case 1:
                printf("\nVocê escolheu mostrar o valor do topo da pilha!\n\n");
                if(vazia())
                {
                    printf("A pilha está vazia e não tem elementos no topo!");
                    printf("\n");
                }
                else
                {
                    printf("O valor que está no topo é o: %d", valores[topo]);
                    printf("\n");
                }
                break;
            case 2:
                printf("\nVocê escolheu ver todos os elementos da pilha!\n\n");
                if(vazia())
                {
                    printf("A pilha está vazia e não tem elementos nela!");
                    printf("\n");
                }
                else
                {
                    for(int i = 0; i <= topo; i++)
                    {
                        printf("%d\n", valores[i]);  
                    }
                    
                }
                break;
            case 3:
                printf("\nVocê escolheu realizar uma conta de adição!\n\n");
                printf("Informe o primeiro número: ");
                scanf("%d", &num1);
                
                printf("Informe o segundo número: ");
                scanf("%d", &num2);
                printf("\n");
                
                resultado = num1 + num2;
                
                printf("Resultado de %d + %d é = %d", num1, num2, resultado);
                push(resultado);
                break;
            case 4:
                printf("\nVocê escolheu realizar uma conta de subtração!\n\n");
                printf("Informe o primeiro número: ");
                scanf("%d", &num1);
                
                printf("Informe o segundo número: ");
                scanf("%d", &num2);
                printf("\n");
                
                resultado = num1 - num2;
                printf("O resultado de %d - %d é = %d", num1, num2, resultado);
                push(resultado);
                break;
            case 5:
                printf("\nVocê escolheu realizar uma conta de divisão!\n\n");
                printf("Informe o primeiro número: ");
                scanf("%d", &num1);
                
                printf("Informe o segundo número: ");
                scanf("%d", &num2);
                printf("\n");
                if(num2 != 0)
                {
                    resultado = num1 / num2;
                    printf("O resultado de %d / %d = %d", num1, num2, resultado);
                    push(resultado);
                }
                else
                {
                    printf("Informe um segundo número que seja diferente de 0!");
                }
                break;
            case 6:
                printf("\nVocê escolheu realizar uma conta de multiplicação!\n\n");
                printf("Informe o primeiro número: ");
                scanf("%d", &num1);
                
                printf("Informe o segundo número: ");
                scanf("%d", &num2);
                
                resultado = num1 * num2;
                printf("O resultado de %d X %d = %d", num1, num2, resultado);
                push(resultado);
                break;
            case 7:
                printf("\nRemovendo o último elemento da pilha...");
                pop();
                break;
            default:
                printf("\nInforme uma opção válida!\n\n");
        }
    }while(opcao != 0);
    
    return 0;
}