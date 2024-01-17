#User function Template for python3
'''
	Function to merge two sorted lists in one
	using constant space.
	
	Function Arguments: head_a and head_b (head reference of both the sorted lists)
	Return Type: head of the obtained list after merger.

	{
		# Node Class
		class Node:
		    def __init__(self, data):   # data -> value stored in node
		        self.data = data
		        self.next = None
	}

'''
#Function to merge two sorted linked list.
def sortedMerge(head1, head2):
    # code here
    def printList(ll):
        while ll is not None:
            print(ll.data, end = " ")
            ll = ll.next
        print()
    
    if head1 is None and head2 is None:
        return None
    
    if head1 is None:
        return Head2
    
    if head2 is None:
        return head1
    
    first = None
    second = None
    
    if head1.data < head2.data:
        first = head1
        second = head2
    else:
        first = head2
        second = head1
    
    cp = first
    
    while second is not None:
        #printList(cp)
        #printList(second)
        
        if cp.next is None:
            cp.next = second
            cp = cp.next
            #print("cp is None")
            break

        #print(f"cp.data: {cp.data}, second.data: {second.data}")
        
        if cp.next is not None and cp.next.data > second.data:
            #print("cp")
            temp = cp.next
            
            cp.next = Node(second.data)
            cp = cp.next
            cp.next = temp
            
            second = second.next
        else:
            #print("second")
            cp = cp.next
            
        #print()
        
    return first
    
#{ 
 # Driver Code Starts
#Initial Template for Python 3
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    # creates a new node with given value and appends it at the end of the linked list
    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node    
            return
        self.tail.next = new_node
        self.tail = new_node
        
# prints the elements of linked list
def printList(n):
    while n is not None:
        print(n.data, end=' ')
        n = n.next
    print()

if __name__ == '__main__':
    for _ in range(int(input())):
        n,m = map(int, input().strip().split())
        
        a = LinkedList() # create a new linked list 'a'.
        b = LinkedList() # create a new linked list 'b'.
        
        nodes_a = list(map(int, input().strip().split()))
        nodes_b = list(map(int, input().strip().split()))
        
        for x in nodes_a:
            a.append(x)
        
        for x in nodes_b:
            b.append(x)
        
        printList(sortedMerge(a.head,b.head))

# } Driver Code Ends
