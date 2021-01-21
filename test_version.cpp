#define BOOST_TEST_MODULE otus_hw_test_module

#include "lib.h"

#include <boost/test/unit_test.hpp>
#include <boost/test/unit_test_suite.hpp>

BOOST_AUTO_TEST_SUITE(otus_hw_test_suite)

    BOOST_AUTO_TEST_CASE(otus_hw_test_version)
    {
        BOOST_CHECK(version() > 0);
    }

BOOST_AUTO_TEST_SUITE_END()