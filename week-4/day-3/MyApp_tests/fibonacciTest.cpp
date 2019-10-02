//
// Created by Csabi on 02/10/2019.
//

#include <gtest/gtest.h>
#include <myClass.h>


TEST(fibonacci_check, test_fibonacci){
    ASSERT_EQ(fibonacci(4), 2);
}
