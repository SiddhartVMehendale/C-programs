#define UNIT_TEST
#include"StackUsingLinkedList.cpp"
#include<gtest/gtest.h>


TEST(push, default_data_true)
{
    struct stack *top;
    top = NULL;
    int data = 1;
    bool result = false;

    result = push(&top,data);

    ASSERT_TRUE(result);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}