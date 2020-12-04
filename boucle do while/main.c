#include <stdio.h>
#include <stdlib.h>

int main()
{
   int code_utilisateur = 1234;

   do
   {
       printf("Code d'utilisateur : \n");
       scanf("%d", &code_utilisateur);
   }
   while(code_utilisateur != 1234);

    printf("OK");

    return 0;
}
