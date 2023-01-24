/******************************
 * NE PAS MODIFIER CE FICHIER *
 ******************************/
#include <assert.h>
#include <dct.h>
#include <math.h>
#include <matrix.h>
#include <stdlib.h>

void assert_almost_equal(double v1, double v2, double err) {
    assert(fabs(v1-v2) < err);
}

void assert_matrices_equal(struct matrix* m1, struct matrix* m2, double err) {
    assert(m1 != NULL);
    assert(m2 != NULL);

    assert(m1->size_x == m2->size_x);
    assert(m1->size_y == m2->size_y);

    unsigned size_x = m1->size_x;
    unsigned size_y = m1->size_y;

    for (unsigned j = 0; j < size_y; j++) {
        for (unsigned i = 0; i < size_x; i++) {
            assert_almost_equal(m1->values[j*size_y+i], m2->values[j*size_y+i], err);
        }
    }
}

void test(void) {
    struct matrix matrix = {
        .size_x = (unsigned) 5,
        .size_y = (unsigned) 5,
        .values = (double[]) {
            17.0, 22.0, 32.0, 45.0, 53.0,
            98.0, 13.0, 31.0, 23.0, 42.0,
            12.0, 47.0, 23.0, 62.0, 73.0,
            87.0, 23.0, 73.0, 61.0, 54.0,
            91.0, 65.0, 39.0, 24.0, 76.0,
        },
    };

    struct matrix* got = dct(&matrix, 1);

    struct matrix expected = {
        .size_x = (unsigned) 5,
        .size_y = (unsigned) 5,
        .values = (double[]) {
            338.000000,  -95.514190,    7.854101,    1.428061,  -1.145898,
            414.000000,   94.762624,  142.275534,   84.853078,  90.275534,
            434.000000, -133.662452,   24.167184,  -43.178105, -77.832815,
            596.000000,   18.098050,   30.227937,  111.074121,  97.227937,
            590.000000,   76.730086,  137.206651,  -60.353076,  37.206651,
        },
    };

    assert_matrices_equal(got, &expected, 0.0001);

    free(got);
}

int main() {
    test();

    return 0;
}
