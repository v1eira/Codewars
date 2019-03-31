<!--
Given an array of one's and zero's convert the equivalent binary value to an integer.

Eg: [0, 0, 0, 1] is treated as 0001 which is the binary representation of 1.

Examples:

Testing: [0, 0, 0, 1] ==> 1
Testing: [0, 0, 1, 0] ==> 2
Testing: [0, 1, 0, 1] ==> 5
Testing: [1, 0, 0, 1] ==> 9
Testing: [0, 0, 1, 0] ==> 2
Testing: [0, 1, 1, 0] ==> 6
Testing: [1, 1, 1, 1] ==> 15
Testing: [1, 0, 1, 1] ==> 11
However, the arrays can have varying lengths, not just limited to 4.
-->

function binaryArrayToNumber($arr) {
  
  $num = 0;
    
  for ($i = count($arr)-1; $i >= 0; $i--)
  {
    if ($arr[$i] == 1)
    {
      $exp = count($arr) -1 - $i;
      $value = 2 ** $exp;
      $num += $value;
    }
  }
      
  return $num;
}
