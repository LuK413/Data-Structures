class Queue:
    """docstring for Queue"""

    def __init__(self):
        self.contents = []
        self.size = 0

    def enqueue(item):  # add item
        self.contents.append(item)
        self.size += 1

    def dequeue():  # remove item
        self.contents.remove(self.contents[0])

    def empty():
        return size == 0

    def top():
        return self.contents[self.size - 1]
