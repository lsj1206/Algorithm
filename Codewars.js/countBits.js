/* 23.08.19
count number's_'1'binary
*/

var countBits = function(num) {
  var binary_num = num.toString(2);
  return (binary_num.match(/1/g) || []).length;
}
