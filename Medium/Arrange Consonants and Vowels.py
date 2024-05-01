#User function Template for python3

"""
# Node Class

class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

"""

class Solution:
    #Function to reverse a linked list.
    def swap(self, first, second):
        a = first.next
        b = second.next
        
        first.next = b
        second.next = second.next.next
        
        b.next = a
    
    def arrangeCV(self, head):
        # Code here
        if head is None:
            return None
        
        copy = head

        wowels = {'a','e','i','o','u'}
        
        v = 0
        c = 0 
        
        while copy:
            if copy.data in wowels:
                v = 1
            else:
                c = 1
            
            if v == 1 and c == 1:
                break
            
            copy = copy.next
        
        if v == 0 or c == 0:
            return head
        
        if head.data not in wowels:
            copy = head
            
            while copy.next:
                if copy.next.data in wowels:
                    break
                else:
                    copy = copy.next
                    
            copy2 = copy.next
            copy.next = copy.next.next
            copy2.next = head
            
            head = copy2
            
        temp1 = head
        temp2 = head.next
        
        while temp1.next:
            if temp1.next.data in wowels:
                temp1 = temp1.next
            else:
                break
        
        while True:
            if temp2.data in wowels:
                temp2 = temp2.next
            else:
                break
        
        while temp1 and temp2.next:
            if temp2.next.data in wowels:
                self.swap(temp1, temp2)
                temp1 = temp1.next
            else:
                temp2 = temp2.next
        
        
        return head



#{ 
 # Driver Code Starts
# Node Class
class Node:

    def __init__(self, val):
        self.data = val
        self.next = None


# Linked List Class
class Linked_List:

    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next


def printList(head):
    tmp = head
    while tmp:
        print(tmp.data, end=' ')
        tmp = tmp.next
    print()


if __name__ == '__main__':
    for i in range(int(input())):
        n = int(input())
        arr = [str(x) for x in input().split()]

        lis = Linked_List()
        for i in arr:
            lis.insert(i)

        newHead = Solution().arrangeCV(lis.head)
        printList(newHead)

# } Driver Code Ends