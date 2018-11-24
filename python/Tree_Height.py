class Node:

    def __init__(self,key):
        self.left = None
        self.right = None
        self.data = key

def calculate_Height(root):

    left_Height = 0
    right_Height = 0


    if not root:
        return 0
    elif root.left:
        left_Height = 1+calculate_Height(root.left)
    elif root.right:
        right_Height = 1+calculate_Height(root.right)


    if left_Height > right_Height:
        return left_Height
    else:
        return right_Height




if __name__ == "__main__":

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.left.left = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)

    Height = calculate_Height(root)

    print "Height Of Tree",Height
