#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./explode.h"

int main(void)
{
    char *test = "Hello I am Josh and I like tofu";

    StringArr *expanded_test = explode(test, SPACE_CHAR);

    if (expanded_test == NULL)
    {
        printf("Couldn't explode string :(\n");
        return EXIT_FAILURE;
    }

    // PrintStringArrDebug(expanded_test);
    PrintStringArr(expanded_test);
    FreeStringArr(expanded_test);
    return EXIT_SUCCESS;
}
