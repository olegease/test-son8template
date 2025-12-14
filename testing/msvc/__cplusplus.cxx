#include <cstdlib>

#if __cplusplus == 199711L
#define TEST_RETURN EXIT_FAILURE
#else
#define TEST_RETURN EXIT_SUCCESS
#endif

int main( ) {
    return TEST_RETURN;
}
