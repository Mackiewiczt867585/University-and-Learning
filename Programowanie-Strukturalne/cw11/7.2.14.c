#include <stdio.h>
#include <stdlib.h>
enum czworokaty {kwadrat,prostokat};
int main()
{
    enum czworokaty cz;
    cz = prostokat;
    printf("%i",cz);
    return 0;
}
