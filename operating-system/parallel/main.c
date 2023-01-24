#include <stdio.h>
#include <pthread.h>
#include <lattice.h>
#include <parallel.h>

struct bound* boundaries(struct bound* bound, struct rect* pos) {
    double x = pos->x;
    double y = pos->y;

    if(x <= 16 && y <= 0) {
        bound->value =  150;
        bound->cond  = DIRICHLET;
    } else if(48 <= x && x <= 64 && y <= 0) {
        bound->value = -150;
        bound->cond  = DIRICHLET;
    } else {
        bound->value = 0;
        bound->cond  = NONE;
    }

	if(16 <  x && x < 48 && (y < 12 || y > 36)) {
        bound->value = 0;
        bound->cond  = NEUMANN;
    }

    return bound;
}

int main() {
    struct rect size = {64, 48};
    struct point dim = {160, 120};
    struct lattice* lattice = lattice_new(&size, &dim, &boundaries);

    if (compute_laplace(lattice, 0.00001, 4) < 0) {
        return 1;
    }

    lattice_print(lattice);
    lattice_delete(lattice);

	return 0;
}

