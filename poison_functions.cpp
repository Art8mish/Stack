
#include "libraries.h"

void GetPoisonChar(char *arg)
{
    *arg = '\0';
}

void GetPoisonUInt(unsigned int *arg)
{
    *arg = NAN;
}

void GetPoisonInt(int *arg)
{
    *arg = NAN;
}

void GetPoisonULong(unsigned long *arg)
{
    *arg = NAN;
}

void GetPoisonLong(long *arg)
{
    *arg = NAN;
}

void GetPoisonULongLong(unsigned long long *arg)
{
    *arg = NAN;
}

void GetPoisonLongLong(long long *arg)
{
    *arg = NAN;
}

void GetPoisonFloat(float *arg)
{
    *arg = NAN;
}

void GetPoisonDouble(double *arg)
{
    *arg = NAN;
}

void GetPoisonLongDouble(long double *arg)
{
    *arg = NAN;
}

void GetPoisonPointer(void **arg)
{
    *arg = (void*)POISON_POINTER;
}
