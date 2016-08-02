#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lib/utils.h"

int main(int argc, char *argv[])
{
    srand(time(NULL));
    char key[10];
    snprintf(key, 10, "%d", rand());
    uint32_t hash = jenkins_hash(key, strlen(key));

    printf("Hash is %d and original key is \"%s\" with length %zu", hash, key, strlen(key));
    return 0;
}
