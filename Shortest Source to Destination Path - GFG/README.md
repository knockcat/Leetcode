# Shortest Source to Destination Path
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a&nbsp;2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).<br>Note: You can only move left, right, up and down, and only through cells that <strong>contain 1</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>
N=3, M=4
A=[[1,0,0,0], 
   [1,1,0,1],<br>   [0,1,1,1]]
X=2, Y=3 
<strong>Output:</strong>
5
<strong>Explanation:</strong>
The shortest path is as follows:
(0,0)-&gt;(1,0)-&gt;(1,1)-&gt;(2,1)-&gt;(2,2)-&gt;(2,3).</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>
N=3, M=4
A=[[1,1,1,1],
   [0,0,0,1],<br>   [0,0,0,1]]
X=0, Y=3
<strong>Output:</strong>
3
<strong>Explanation:</strong>
The shortest path is as follows:
(0,0)-&gt;(0,1)-&gt;(0,2)-&gt;(0,3).</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>shortestDistance()</strong> which takes the integer N, M, X, Y, and the 2D binary matrix A as input parameters and returns the minimum number of steps required to go from (0,0) to (X, Y).If it is impossible to go from (0,0) to&nbsp;(X, Y),then function returns -1. If value of the cell (0,0) is 0&nbsp;(i.e&nbsp; A[0][0]=0)&nbsp;then return -1.</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong>O(N*M)<br><strong>Expected Auxillary Space:</strong>O(N*M)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= N,M &lt;= 250<br></span><span style="font-size: 14pt;">0 &lt;= X &lt; N<br></span><span style="font-size: 14pt;">0 &lt;= Y &lt; M<br>0 &lt;= A[i][j] &lt;= 1</span></p></div>