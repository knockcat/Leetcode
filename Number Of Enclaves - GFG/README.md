# Number Of Enclaves
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an <strong>n&nbsp;x m</strong>&nbsp;binary matrix <strong>grid</strong>, where <strong>0</strong> represents a sea cell and <strong>1</strong> represents a land cell.</span></p>
<p><span style="font-size: 18px;">A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.</span></p>
<p><span style="font-size: 18px;">Find the number of land cells in <strong>grid</strong> for which we cannot walk off the boundary of the grid in any number of moves.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">grid[][] = {{0, 0, 0, 0},
            {1, 0, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}}</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">3</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">0 0 0 0
1 0 <strong>1</strong> 0
0 <strong>1</strong> <strong>1</strong> 0
0 0 0 0</span>
<span style="font-size: 18px;">The highlighted cells represents the land cells.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">grid[][] = {{0, 0, 0, 1},
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 1},
            {0, 1, 1, 0}}</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">4</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">0 0 0 1
0 <strong>1</strong> <strong>1</strong> 0
0 <strong>1</strong> <strong>1</strong> 0
0 0 0 1
0 1 1 0</span>
<span style="font-size: 18px;">The highlighted cells represents the land cells.</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong></p>
<p><span style="font-size: 18px;">You don't need to print or input anything. Complete the function <strong>numberOfEnclaves()&nbsp;</strong>which takes a 2D integer matrix <strong>grid&nbsp;</strong>as the input parameter and returns an integer, denoting the number of land cells.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n * m)</span></p>
<p><span style="font-size: 18px;"><strong>Expected Space Complexity:</strong> O(n * m)</span></p>
<p><strong><span style="font-size: 18px;">Constraints:</span></strong></p>
<ul>
<li><span style="font-size: 18px;">1 &lt;= n, m &lt;= 500</span></li>
<li><span style="font-size: 18px;">grid[i][j] == 0 or 1</span></li>
</ul></div>