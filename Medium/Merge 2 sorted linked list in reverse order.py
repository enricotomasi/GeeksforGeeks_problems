#User function Template for python3

'''
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
'''

class Solution:
    def mergeResult(self, h1, h2):
        #return head of merged list

        temp = Llist()
        tail = None
        
        while h1 is not None or h2 is not None:
            if h1 is None:
                tail = temp.insert(h2.data, tail)    
                h2 = h2.next
            elif h2 is None:
                tail = temp.insert(h1.data, tail)
                h1 = h1.next
            else:
                if h1.data > h2.data:
                    tail = temp.insert(h2.data, tail)    
                    h2 = h2.next
                else:
                    tail = temp.insert(h1.data, tail)
                    h1 = h1.next
            
        ans = None
        current = temp.head 
        
        while(current is not None): 
            next = current.next
            current.next = ans 
            ans = current 
            current = next
        
        return ans
            
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Llist:
    def __init__(self):
        self.head=None
    
    def insert(self,data,tail):
        node=Node(data)
        
        if not self.head:
            self.head=node
            return node
        
        tail.next=node
        return node
        

def printList(head):
    while head:
        print(head.data,end=' ')
        head=head.next
        
if __name__ == '__main__':
    t=int(input())
    
    for tcs in range(t):
        
        n1,n2=[int(x) for x in input().split()]
        
        arr1=[int(x) for x in input().split()]
        ll1=Llist()
        tail=None
        for nodeData in arr1:
            tail=ll1.insert(nodeData,tail)
            
            
        arr2=[int(x) for x in input().split()]
        ll2=Llist()
        tail=None
        for nodeData in arr2:
            tail=ll2.insert(nodeData,tail)
        
        
        ob = Solution()
        resHead=ob.mergeResult(ll1.head,ll2.head)
        printList(resHead)
        print()
        
    
    
# } Driver Code Ends