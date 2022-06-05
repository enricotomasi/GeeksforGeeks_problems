 
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

function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let N = parseInt(readLine());
    let obj = new Solution();
    let res = obj.isSumPalindrome(N);
    console.log(res);
  }
}// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} N
 * @return {number}
 */
class Solution {
  isSumPalindrome(n) {
    //code here
    let N = n.toString();
    
    for (let i=0; i<=5; i++){ // max 5 interazioni

        let invertito = N.split("").reverse().join("");
        
        if (N==invertito) return N;
        
        if (i==5) break;
        
        let primo = parseInt(N);
        let secondo = parseInt(invertito);
        let somma = primo+secondo;
        N = somma.toString();
        
        //console.log("Ciclo:" + i + " primo:" + primo + " secondo:" + secondo + " somma:" + somma);
        
    }
    return -1;
  }
}