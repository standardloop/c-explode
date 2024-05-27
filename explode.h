#ifndef EXPLODE_H
#define EXPLODE_H

#define NULL_CHAR '\0'

typedef struct
{
    char **strings;
    int num_strings;
} StringArr;

StringArr *EveryoneExplodeNow(char *, char);
void FreeStringArr(StringArr *);
void PrintStringArr(StringArr *);
void PrintStringArrDebug(StringArr *);

#endif
