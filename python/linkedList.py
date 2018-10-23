class Node:

    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self):
        self.head = None
    
    def printList(self):
        temp = self.head

        while(temp):
            print(temp.data,"->")
            temp=temp.next

    def push(self,new_data):

        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def insertAfter(self,new_data,prev_node):

        if prev_node is None:
            print ("Given position is not available in list")
            return

        new_node = Node(new_data)

        new_node.next = prev_node.next
        prev_node.next = new_node

    def append(self,new_data):

        new_node = Node(new_data)

        if self.head is None:
            self.head = new_node
            return
        
        last = self.head
        while(last.next):
            last = last.next
        
        last.next = new_node




if __name__ == "__main__":

    llist = LinkedList()

    llist.push(1)
    llist.push(2)
    llist.push(3)
    llist.push(4)
   # llist.printList()

    llist.insertAfter(0,llist.head.next.next)
    llist.printList()


