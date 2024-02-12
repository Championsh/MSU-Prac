/* Include benchmark-specific header. */
/* Include benchmark-specific header. */
#include "heat-3d.h"
#include <stdbool.h>
#include <omp.h>

int main(int argc, char** argv)
{
    int count, pos_mask, t, i, j, k;

    count = 0;
    pos_mask = 0;

    int rank = 5;
    int numtasks = 10;

    if (rank != 0) {
        count += 2;
        pos_mask += 1;
    }
    if (rank + 1 != numtasks) {
        count += 2;
        pos_mask += 2;
    }

    if (numtasks > 1) {
        int pos = (pos_mask == 3) ? 4 : (pos_mask == 2) ? 2 : 0;
        printf("%d %d\n", count, pos);
    }

    return 0;
}