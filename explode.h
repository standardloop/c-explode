#ifndef EXPLODE_H
#define EXPLODE_H

#define SPACE_CHAR ' '
#define NULL_CHAR '\0'
#define SLASH_CHAR '/'

typedef struct
{
    char **strings;
    int num_strings;
} StringArr;

StringArr *Explode(char *, char);
void FreeStringArr(StringArr *);
void PrintStringArr(StringArr *);
void PrintStringArrDebug(StringArr *);

#endif
