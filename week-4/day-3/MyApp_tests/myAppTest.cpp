//
// Created by Csabi on 01/10/2019.
//

#include <gtest/gtest.h>
#include <myClass.h>


TEST(apple_check, test_apple){
    ASSERT_EQ(getApple(), "apple");
}