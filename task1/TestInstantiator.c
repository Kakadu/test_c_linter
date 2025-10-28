#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <stdint.h>

extern uint64_t fac(uint64_t);

static void test_fac(void)
{
    int n = fac(5L);
    CU_ASSERT(n == 120L);
}

int main()
{
    // exit(1);
    CU_initialize_registry();
    printf("fac(5) = %ld\n", fac(5L));
    {
        CU_pSuite suite = CU_add_suite("tes1", 0, 0);
        CU_add_test(suite, "test of print_int()", test_fac);
    }
    CU_basic_run_tests();

    CU_cleanup_registry();

    return 0;
}