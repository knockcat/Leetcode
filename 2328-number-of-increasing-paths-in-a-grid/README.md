<h2><a href="https://leetcode.com/problems/number-of-increasing-paths-in-a-grid/">2328. Number of Increasing Paths in a Grid</a></h2><h3>Hard</h3><hr><div><p>You are given an <code>m x n</code> integer matrix <code>grid</code>, where you can move from a cell to any adjacent cell in all <code>4</code> directions.</p>

<p>Return <em>the number of <strong>strictly</strong> <strong>increasing</strong> paths in the grid such that you can start from <strong>any</strong> cell and end at <strong>any</strong> cell. </em>Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>Two paths are considered different if they do not have exactly the same sequence of visited cells.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/10/griddrawio-4.png" style="width: 181px; height: 121px;">
<pre><strong>Input:</strong> grid = [[1,1],[3,4]]
<strong>Output:</strong> 8
<strong>Explanation:</strong> The strictly increasing paths are:
- Paths with length 1: [1], [1], [3], [4].
- Paths with length 2: [1 -&gt; 3], [1 -&gt; 4], [3 -&gt; 4].
- Paths with length 3: [1 -&gt; 3 -&gt; 4].
The total number of paths is 4 + 3 + 1 = 8.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> grid = [[1],[2]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The strictly increasing paths are:
- Paths with length 1: [1], [2].
- Paths with length 2: [1 -&gt; 2].
The total number of paths is 2 + 1 = 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 1000</code></li>
	<li><code>1 &lt;= m * n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= grid[i][j] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>