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

TEST(pop, default_data_true)
{
    struct stack *top;
    top = NULL;
    int data = 4;
    bool result = false;

    push(&top, data);

    result = pop(&top, &data);
    printf("\n%d\n", data);

    ASSERT_TRUE(result);
}

TEST(pop, defult_data_false)
{
    struct stack *top;
    top = NULL;
    int data;
    bool result = false;
    printf("\nAssert for false\n");
    result = pop(&top, &data);
    ASSERT_FALSE(result);
}

TEST(Push_For_Data_Null, default_data_false)
{
    struct stack *top;
    top = NULL;
    int data = NULL;
    bool result = true;
    printf("\n Test for data = NULL\n");
    result = push(&top, data);

    ASSERT_FALSE(result);
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}