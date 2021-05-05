#include "functionStrcopy.cpp"
#include "gtest/gtest.h"
TEST(testFunction, Single) {
    char s2[] = "Hello world";
    char s1[20];
    strcpy(s1,s2);
    EXPECT_EQ((s1,s2)=="Hello world");
}
TEST(testFunction, NonEmpty) {
char s2[] = "5678";
char s1[20];
strcpy(s1,s2);
EXPECT_EQ((s1,s2)=="5678");
}

