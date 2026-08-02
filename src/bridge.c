#include "bridge.h"
#include "call.h"

int main(void)
{
    bridge_main();
    return 0;
}

int bridge_main(void)
{
    str_write("bridge main");

    str_write("bridge inf loop");
    while (1)
    {
        ;
    }
    return 0;
}

int debug_main(void)
{
    str_write("debug bridge main");

    str_write("bridge inf loop");
    while (1)
    {
        ;
    }
    return 0;
}