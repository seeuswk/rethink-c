#ifndef RETHINK_C_TEST_HELPER_H
#define RETHINK_C_TEST_HELPER_H

#include "compare.h"

#define ASSERT_INT_EQ(a, b)                                           \
    if ((a) != (b)) {                                                 \
        printf("\nassert: Left [%d] not equal to Right[%d]\n", a, b); \
        assert(a == b);                                               \
    }

#define ASSERT_CHAR_EQ(a, b)                                          \
    if ((a) != (b)) {                                                 \
        printf("\nassert: Left [%c] not equal to Right[%c]\n", a, b); \
        assert(a == b);                                               \
    }

// inline int *intdup(int value)
// {
//     int *dup = (int *)malloc(sizeof(int));
//     *dup = value;
//     return dup;
// }

// inline int string_equal(void *str1, void *str2)
// {
//     return strcmp((char *)str1, (char *)str2) == 0;
// }

int *intdup(int value);
int string_equal(void *str1, void *str2);

#endif /* RETHINK_C_TEST_HELPER_H */
