# Surround the 1's
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix of order <strong>n</strong>x<strong>m</strong>, composed of only 0's and 1's, find the number of 1's in the matrix that are surrounded by an <strong>even number (&gt;0) of 0's</strong>. The surrounding of a cell in the matrix is defined as the <strong>elements above</strong>, <strong>below</strong>, on <strong>left</strong>, on <strong>right</strong> as well as the<strong> 4 diagonal elements</strong> around the cell of the matrix. Hence, the surrounding of any matrix elements is composed of 8 elements. Find the number of such 1's.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>matrix = {{1, 0, 0}, <br>          {1, 1, 0}, 
          {0, 1, 0}}
<strong>Output: <br></strong>1
<strong>Explanation: <br></strong>1 that occurs in the 1st row and 1st column, has 3 surrounding elements 0,1 and 1. The occurrence of zero is odd. <br>1 that occurs in 2nd row and 1st column has 5 surrounding elements 1,0,1,1 and 0. The occurrence of zero is even. <br>1 that occurs in 2nd row and 2nd column has 8 surrounding elements. The occurrence of 0 is odd. <br>Similarly, for the 1 that occurs in 3rd row and 2nd column, the occurrence of zero in it's 5 surrounding elements is odd. 
Hence, the output is 1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>matrix = {{1}}
<strong>Output: <br></strong>0
<strong>Explanation: <br></strong>There is only 1 element in the matrix. Hence, it has no surroundings, so it's count for even 0's is 0 for the whole matrix. <br>0 is even but we want occurrence of a zero in the surrounding at least once. 
Hence, output is 0.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>Count()</strong> which takes the matrix as input parameter and returns the number of 1's which are surrounded by even number of 0's.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n * m)<br><strong>Expected Space Complexity:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n, m &lt;= 10<sup>3</sup></span></p></div>