#include "fatorial.h"

unsigned long long int fatorial (int parametro) {
    unsigned long long int fatorial = 1;
    for (parametro; parametro > 1; parametro --) fatorial *= parametro;
    return fatorial;
}
