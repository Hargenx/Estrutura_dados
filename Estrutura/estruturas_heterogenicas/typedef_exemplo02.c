#include <stdio.h>

#define MEU_TIPO int
typedef int Meu_Tipo;

#define FX_TYPE void (*)(int)
typedef void (*stdfx)(int);

void fx_typ(stdfx fx);   /* ok */
//void fx_def(FX_TYPE fx); /* error */

typedef enum{
    FALSE = 0,
    TRUE
} BOOLEAN;
int main(){
    BOOLEAN flag = TRUE;
    printf("%i", flag);
    return 0;
}