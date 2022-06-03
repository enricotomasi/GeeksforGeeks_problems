// { Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;



process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}

class Node {
  constructor(x){
    this.data = x;
    this.next = null;
  }
}


function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let n = parseInt(readLine());
    let arr = readLine().trim().split(" ").map((x) => parseInt(x));
    let head = new Node(arr[0]);
    let tail = head;
    for(let j = 1;j<n;j++){
      tail.next = new Node(arr[j]);
      tail = tail.next;
    }
    let obj = new Solution();
    let res = obj.isLengthEvenOrOdd(head);
    if(res)
      console.log("Odd");
    else
      console.log("Even");
  } 

}// } Driver Code Ends


//User function Template for javascript

/*LINKED LIST NODE
class Node {
  constructor(x){
    this.data = x;
    this.next = null;
  }
}
*/


/**
 * @param {Node} head
 * @return {number}
*/

class Solution {
  // Function should return 0 if length is even else return 1
  isLengthEvenOrOdd(head){
    //code here
    
    let conta = 0;
    while (head !== null)
    {
        conta++;
        head = head.next;
    }
    
    if (conta%2 === 0) return 0; else return 1;
    

  }
}
