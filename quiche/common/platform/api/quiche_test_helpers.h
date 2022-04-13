#ifndef QUICHE_COMMON_PLATFORM_API_QUICHE_TEST_HELPERS_H_
#define QUICHE_COMMON_PLATFORM_API_QUICHE_TEST_HELPERS_H_

#include "quiche_platform_impl/quiche_test_helpers_impl.h"

#define EXPECT_QUICHE_BUG EXPECT_QUICHE_BUG_IMPL

#define VERIFY_AND_RETURN_SUCCESS(expression) \
  {                                           \
    VERIFY_SUCCESS(expression);               \
    return ::testing::AssertionSuccess();     \
  }

#endif  // QUICHE_COMMON_PLATFORM_API_QUICHE_TEST_HELPERS_H_
