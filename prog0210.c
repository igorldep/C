#include <stdio.h>

int main()
{
        char ch;

        printf("Digite y ou n: ");
        scanf("%c", &ch);

        while(ch != y || ch != n)
        {
                printf("Digite y ou n: ");
                scanf("%c", &ch);
        }
        if(ch == y)
        {
                printf("\nVocê digitou yes!\n");
        }
        else
        {
                printf("\nVocê digitou no!\n");
        }

return 0;
}
