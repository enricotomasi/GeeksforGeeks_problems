 
// { Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
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
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let arr = readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res=obj.find_median(arr);
        console.log(res);
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @return {number}
*/

class Solution {

    find_median(arr){
        arr.sort((a,b) => (a-b));
        if (arr.length %2 === 0) { //pari
            //console.log("pari");
            let primo = arr[Math.floor(arr.length)/2];
            //console.log(primo);
            let secondo= arr[(Math.floor(arr.length)/2)-1]
            //console.log(secondo);
            let mediana = Math.floor((primo+secondo)/2);
            //console.log(mediana);
            return mediana;
        } else { //dispari
            //console.log("dispari");
            let mediana = arr[Math.floor(arr.length/2)];
            //console.log(mediana);
            return mediana;
        }

    }
}