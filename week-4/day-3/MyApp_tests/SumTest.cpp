//
// Created by Csabi on 02/10/2019.
//

#include <gtest/gtest.h>
#include <myClass.h>


TEST(sum_check, test_sum){
    ASSERT_EQ(getSum(), 6);
}

