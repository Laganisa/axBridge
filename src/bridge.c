#include "bridge.h"
#include "call.h"

int main(void)
{
    bridge_main();
    return 0;
}

int bridge_main(void)
{
    str_write("HI");

    str_write("bridge inf loop");
    while (1)
    {
        ;
    }
    return 0;
}