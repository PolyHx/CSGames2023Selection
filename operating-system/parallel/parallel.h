#ifndef INCLUDE_PARALLEL_H
#define INCLUDE_PARALLEL_H

#include <lattice.h>

int compute_laplace(struct lattice* lattice, double threshold, unsigned threads);

#endif
