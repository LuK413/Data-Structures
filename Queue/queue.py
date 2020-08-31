class Queue:
    """Queue data structure"""

    def __init__(self):
        self.contents = []
        self.size = 0

    def enqueue(self, item):  # add item
        self.contents.append(item)
        self.size += 1

    def dequeue(self):  # remove item
        self.contents.remove(self.contents[0])
        self.size -= 1

    def empty(self):
        return self.size == 0

    def top(self):
        return self.contents[self.size - 1]


queue = Queue()

print(queue.empty())

print(queue.enqueue(4))
print(queue.enqueue(2))
print(queue.top())
