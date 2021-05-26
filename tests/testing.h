#ifndef TESTING_H
#define TESTING_H
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "helper.h"

TEST(atang, positive) {
    double ex = atang(1, 1);
    EXPECT_EQ( 135, ex);

    ex = atang(1, -1);
    EXPECT_EQ( 45, ex);

    ex = atang(-1, 1);
    EXPECT_EQ( -135, ex);

    ex = atang(1, 0);
    EXPECT_EQ( -90, ex);

    ex = atang(-1, 0);
    EXPECT_EQ( -90, ex);
}

TEST(atang, negative){
    double ex = atang(0, 1);
    EXPECT_EQ( 0, ex);

    ex = atang(0, 0);
    EXPECT_EQ( 0, ex);
}

TEST(vector, positive){
    vector ex;
    ex = vect(1, 0);
    EXPECT_EQ( 1, ex.x1);
    EXPECT_EQ( 0, ex.x2);

    ex = vect(6, 8);
    EXPECT_EQ( 0.6, ex.x1);
    EXPECT_EQ( 0.8, ex.x2);

    ex = vect(-6, 8);
    EXPECT_EQ( -0.6, ex.x1);
    EXPECT_EQ( 0.8, ex.x2);
}
TEST(vector, negative){
    vector ex;
    ex = vect(0,0);
    EXPECT_EQ( 0, ex.x1);
    EXPECT_EQ( 0, ex.x2);
}
TEST(reject, positive){
    EXPECT_EQ( 45, reject(135));
    EXPECT_EQ( 0, reject(180));

    EXPECT_EQ( -150, reject(-30));
    EXPECT_EQ( -120, reject(-60));
}
TEST(reject, negative){
    EXPECT_EQ( 180, reject(0));
    EXPECT_EQ( 180, reject(90));
    EXPECT_EQ( 180, reject(-90));
}
TEST(stolk, positive){
    vector ex;
    ex = stolk(6, 8, 30);
    EXPECT_EQ( ex.x1, true);
    EXPECT_EQ( ex.x2, 210);

    ex = stolk(100, 100, 60);
    EXPECT_EQ( ex.x1, false);
    EXPECT_EQ( ex.x2, 60);
}
TEST(stolk, negative){
    vector ex;
    ex = stolk(-1, -9, 11);
    EXPECT_EQ( ex.x1, true);
    EXPECT_EQ( ex.x2, 191);

    ex = stolk(-100, -100, 33);
    EXPECT_EQ( ex.x1, false);
    EXPECT_EQ( ex.x2, 33);
}
#endif // TESTING_H


