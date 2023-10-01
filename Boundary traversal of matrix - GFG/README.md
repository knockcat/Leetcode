# Boundary traversal of matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a matrix&nbsp;of dimensions <strong>n&nbsp;x m</strong>. The task is to perform&nbsp;boundary traversal on the matrix in a&nbsp;clockwise manner. </span><br><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
n = 4, m = 4
matrix[][] = {{1, 2, 3, 4},
&nbsp;        {5, 6, 7, 8},
&nbsp;        {9, 10, 11, 12},
&nbsp;        {13, 14, 15,16}}
<strong>Output</strong>: 1 2 3 4 8 12 16 15 14 13 9 5
<strong>Explanation</strong>:
The matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The boundary traversal is:
1 2 3 4 8 12 16 15 14 13 9 5
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
n = 3, m = 4
matrrix[][] = {{12, 11, 10, 9},
&nbsp;        {8, 7, 6, 5},
&nbsp;        {4, 3, 2, 1}}
<strong>Output</strong>: 12 11 10 9 5 1 2 3 4 8
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete the function <strong>boundaryTraversal()&nbsp;</strong>that takes matrix, n and m&nbsp;as input parameters and returns the list of integers that form<strong>&nbsp;</strong>the boundary traversal of the matrix in a clockwise manner.</span><br><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N&nbsp;+ M)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span><br><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n, m&lt;= 1000<br>0 &lt;= matrix<sub>i</sub> &lt;= 1000</span></p></div>