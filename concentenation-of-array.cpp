/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    var brr=[];
    for(var i=0;i<nums.length;i++){
        brr[i]=nums[i];
    }
     var co=0;
    for(var j=nums.length;j<2*nums.length;j++){
          brr[j]=nums[co];
          co=co+1;
    }
        return brr;
};