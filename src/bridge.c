#include "bridge.h"
#include "call.h"

int main(void)
{
    bridge_main();
    return 0;
}

int bridge_main(void)
{
    write(0, "%s", "bridge main\n");

    write(0, "%s", "\nbridge inf loop\n");
    while (1)
    {
        ;
    }
    return 0;
}

int debug_main(void)
{
    write(0, "%s", "debug bridge main\n");

    write(0, "%s", "\nbridge inf loop\n");
    while (1)
    {
        ;
    }
    return 0;
}