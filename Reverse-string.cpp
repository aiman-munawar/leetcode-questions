/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    var left=0;
    var right=s.length-1;
    while(left<=right){
        var temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left=left+1;
        right=right-1;
    }
    return s;

};