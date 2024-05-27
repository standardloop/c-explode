#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./explode.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("%s needs 2 args, the first being an input string and the second being a delim char\n", argv[0]);
        return EXIT_FAILURE;
    }

    StringArr *expanded_test = EveryoneExplodeNow(argv[1], argv[2][0]);

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
