#include <stdio.h>
#include <string.h>
#include "lib/utils.h"

int main(int argc, char *argv[]) {
    char *key = "megakey";
    uint32_t hash = jenkins_hash(key, strlen(key));

    printf("%d and original key length %zu", hash, strlen(key));
    return 0;
}
