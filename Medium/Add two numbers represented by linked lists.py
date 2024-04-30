#User function Template for python3

''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        
        s1 = ""
        while num1:
            s1 += str(num1.data)
            num1 = num1.next
        
        n1 = int(s1)
        
        #print(n1)
        
        s2 = ""
        while num2:
            s2 += str(num2.data)
            num2 = num2.next
        
        n2 = int(s2)
        
        #print(n2)
    
        n3 = n1 + n2
        
        s3 = str(n3)
        
        ans = Node(ord(s3[0]) - ord("0"))
        copy = ans
        
        for i in range(1, len(s3)):
            digit = ord(s3[i]) - ord("0")
            #print(digit)
            copy.next = Node(digit)
            copy = copy.next
        
        return ans
        
        
        
        
        
        
        
        
        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

# Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

# prints the elements of linked list starting with head
def printList(n):
    while n:
        print(n.data,end=' ')
        n = n.next
    print()

if __name__ == '__main__':
    for _ in range(int(input())):
        
        n = int(input())
        arr1 = ( int(x) for x in input().split() )
        num1 = LinkedList()
        for i in arr1:
            num1.insert(i)
        
        m = int(input())
        arr2 = ( int(x) for x in input().split() )
        num2 = LinkedList()
        for i in arr2:
            num2.insert(i)
        
        res = Solution().addTwoLists(num1.head, num2.head)
        printList(res)
# } Driver Code Ends
