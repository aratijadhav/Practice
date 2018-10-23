import Tree_Height



def Level_Wise_Print(root,level):

    if level == 0:
        print root.data

    elif root.left:
        return Level_Wise_Print(root.left,level-1)
    elif root.right:
        return Level_Wise_Print(root.right,level-1)

if __name__ == "__main__":

    root = Tree_Height.Node(1)
    root.left = Tree_Height.Node(2)
    root.right = Tree_Height.Node(3)


