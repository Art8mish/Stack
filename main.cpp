
#include "libraries.h"


int main(void)
{
    struct Stack stk1 = {};

    //struct Stack stk1 = {228, (Elem_t*)0, -3, -1, {"sdgs", 34, "sfdss"}, 0, ALIVE_STATUS, 0, 1000-7, 3738934, 75547};

    STACKCTOR(&stk1, 2);


    for (int index = 0; index < 2; index++)
        StackPush(&stk1, index);

    STACKDUMP(&stk1, "stk1");

    StackPop(&stk1);
    StackPop(&stk1);
    StackPop(&stk1);

    STACKDUMP(&stk1, "stk1");

    StackDtor(&stk1);

    STACKDUMP(&stk1, "stk1");

    printf("SUCCESS");

}
