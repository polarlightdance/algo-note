#include "gtest/gtest.h"

#include "single_list.h"

TEST(SingleListTest, addNode) {
    HelloAlgo::SingleList singleList;
    EXPECT_EQ(singleList.addNode(1), 0);
}

TEST(SingleListTest, print) {
    HelloAlgo::SingleList singleList;
    singleList.addNode(1);
    singleList.addNode(2);
    singleList.addNode(3);
    singleList.print();
}

TEST(SingleListTest, removeNode) {
    HelloAlgo::SingleList singleList;
    singleList.addNode(1);
    singleList.addNode(2);
    singleList.addNode(3);
    EXPECT_EQ(singleList.removeNode(2), 0);
}

TEST(SingleListTest, searchNode) {
    HelloAlgo::SingleList singleList;
    singleList.addNode(1);
    singleList.addNode(2);
    singleList.addNode(3);
    auto node = singleList.searchNode(2);
    EXPECT_EQ(node->value, 2);
}

TEST(SingleListTest, setNode) {
    HelloAlgo::SingleList singleList;
    singleList.addNode(1);
    singleList.addNode(2);
    singleList.addNode(3);
    EXPECT_EQ(singleList.setNode(2, 4), 0);
}

