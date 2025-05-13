#include "gtest/gtest.h"
#include "../Library/queue.h"

class QueueTest : public ::testing::Test {
protected:
    void SetUp() override {
        queue = new Queue({10, 20, 30});
    }

    void TearDown() override {
        delete queue;
    }

    Queue* queue;
};

TEST_F(QueueTest, EnqueueAndDequeue) {
    queue->enqueue(40);
    EXPECT_EQ(queue->dequeue(), 10);
    EXPECT_EQ(queue->dequeue(), 20);
}

TEST_F(QueueTest, Peek) {
    EXPECT_EQ(queue->peek(), 10);
}

TEST_F(QueueTest, IsEmpty) {
    EXPECT_FALSE(queue->isEmpty());
    while (!queue->isEmpty()) {
        queue->dequeue();
    }
    EXPECT_TRUE(queue->isEmpty());
}

TEST_F(QueueTest, ToString) {
    EXPECT_EQ(queue->toString(), "[10, 20, 30]");
}

