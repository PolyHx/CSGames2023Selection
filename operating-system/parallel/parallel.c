#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <parallel.h>
#include <pthread.h>
#include <semaphore.h>
#include <math.h>

struct worker {
    /* TODO: fortement recommandé d'avoir une structure pour vos données */
};

void* work(void* data) {
    struct worker* worker = (struct worker*) data;

    /* TODO: je suis assez gentil pour vous donner une début de fonction */

    return NULL;
}

int compute_laplace(struct lattice* lattice, double threshold, unsigned thread_count) {
    uint32_t w = worker->lattice->dim.x;
    uint32_t h = worker->lattice->dim.y;

    /* TODO: idéalement, faudrait mettre de quoi, starter des threads, etc. */

    return 0;   
}
