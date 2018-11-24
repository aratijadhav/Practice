class Node:
    def __init__(self,key):
        self.left = None
        self.right = None
        self.data = key

def PrintInorder(root):

        if root:
            PrintInorder(root.left)
            print root.data
            PrintInorder(root.right)

def PrintPreorder(root):

        if root:
            print root.data
            PrintPreorder(root.left)
            PrintPreorder(root.right)

def PrintPostorder(root):

        if root:
            PrintPostorder(root.left)
            PrintPostorder(root.right)
            print root.data

if __name__ == "__main__":

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print "Inorder Traversal"
    PrintInorder(root)

    print "Preorder Traversal"
    PrintPreorder(root)

    print "Postorder Traversal"
    PrintPostorder(root)
