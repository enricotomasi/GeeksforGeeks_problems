// { Driver Code Starts
// Initial Template for C#

using System;
using System.Collections;

public
class Node {
  public
    int data;
  public
    Node left;
  public
    Node right;
}

public class GFG {
    static Node createNewNode(int value) {
        Node temp = new Node();
        temp.data = value;
        temp.left = null;
        temp.right = null;
        return temp;
    }
    static public Node newNode(Node root, int data) {
        if (root == null)
            root = createNewNode(data);
        else if (data < root.data)
            root.left = newNode(root.left, data);
        else
            root.right = newNode(root.right, data);
        return root;
    }
    static public void Main() {
        int testcases = Convert.ToInt32(Console.ReadLine());
        while (testcases-- > 0) {
            Node root = null;
            int sizeOfArray = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[sizeOfArray];
            arr =
                Array.ConvertAll(Console.ReadLine().Trim().Split(), int.Parse);

            int x = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < sizeOfArray; i++) {
                root = GFG.newNode(root, arr[i]);
            }

            if (Solution.search(root, x) == true)
                Console.WriteLine(1);
            else
                Console.WriteLine(0);
        }
    }
}// } Driver Code Ends


// User function Template for C#

class Solution
{
    // Function to search a node in BST.
    public static bool search(Node root, int x)
    {
        // Your code here
        
        if (root.data == x) return true;

        if (root.left != null)
        {
            if (search(root.left,x)) return true;
        }
        if (root.right != null)
        {
            if (search(root.right,x)) return true;
        }

        return false;
    }
}