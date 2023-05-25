/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
     var ans = [];
  var index = 0;

  while (index < arr.length) {
    ans.push(arr.slice(index, index + size));
    index += size;
  }

  return ans;
};
