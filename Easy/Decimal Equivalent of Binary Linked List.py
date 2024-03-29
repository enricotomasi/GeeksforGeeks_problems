# your task is to complete this function
# Function should return an integer value

'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class Solution:
    def decimalValue(self, head):
        m = (10 ** 9) + 7
        # Code here
        
        def length(head):
            ans = 0
            
            while head:
                ans += 1
                head = head.next
            
            return ans
        
        l = length(head)
        
        #print(f"length: {l}")
        
        ans = 0
        
        while head:
            l -= 1
            
            if head.data == 1:
                p = 2 ** l
                
                ans += p
                ans %= m
            
                #print(f"p: {p}, l: {l} ans: {ans}")
                
            head = head.next
        
        
        return ans 

#{ 
 # Driver Code Starts
# Node Class    
class node:
    def __init__(self):
        self.data = None
        self.next = None
# Linked List Class
class Linked_List:
    def __init__(self):
        self.head = None

    def insert(self, data):
        if self.head == None:
            self.head = node()
            self.head.data = data
        else:
            new_node = node()
            new_node.data = data
            new_node.next = None
            temp = self.head
            while(temp.next):
                temp=temp.next
            temp.next = new_node

# Driver Program
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        list1 = Linked_List()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in values:
            list1.insert(i)
        ob=Solution()
        print(ob.decimalValue(list1.head))
# Contributed By: Harshit Sidhwa
# } Driver Code Ends