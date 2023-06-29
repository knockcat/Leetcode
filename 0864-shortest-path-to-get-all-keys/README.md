<h2><a href="https://leetcode.com/problems/shortest-path-to-get-all-keys/">864. Shortest Path to Get All Keys</a></h2><h3>Hard</h3><hr><div><p>You are given an <code>m x n</code> grid <code>grid</code> where:</p>

<ul>
	<li><code>'.'</code> is an empty cell.</li>
	<li><code>'#'</code> is a wall.</li>
	<li><code>'@'</code> is the starting point.</li>
	<li>Lowercase letters represent keys.</li>
	<li>Uppercase letters represent locks.</li>
</ul>

<p>You start at the starting point and one move consists of walking one space in one of the four cardinal directions. You cannot walk outside the grid, or walk into a wall.</p>

<p>If you walk over a key, you can pick it up and you cannot walk over a lock unless you have its corresponding key.</p>

<p>For some <code><font face="monospace">1 &lt;= k &lt;= 6</font></code>, there is exactly one lowercase and one uppercase letter of the first <code>k</code> letters of the English alphabet in the grid. This means that there is exactly one key for each lock, and one lock for each key; and also that the letters used to represent the keys and locks were chosen in the same order as the English alphabet.</p>

<p>Return <em>the lowest number of moves to acquire all keys</em>. If it is impossible, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-keys2.jpg" style="width: 404px; height: 245px;">
<pre><strong>Input:</strong> grid = ["@.a..","###.#","b.A.B"]
<strong>Output:</strong> 8
<strong>Explanation:</strong> Note that the goal is to obtain all the keys not to open all the locks.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-key2.jpg" style="width: 404px; height: 245px;">
<pre><strong>Input:</strong> grid = ["@..aA","..B#.","....b"]
<strong>Output:</strong> 6
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-keys3.jpg" style="width: 244px; height: 85px;">
<pre><strong>Input:</strong> grid = ["@Aa"]
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 30</code></li>
	<li><code>grid[i][j]</code> is either an English letter, <code>'.'</code>, <code>'#'</code>, or <code>'@'</code>.</li>
	<li>The number of keys in the grid is in the range <code>[1, 6]</code>.</li>
	<li>Each key in the grid is <strong>unique</strong>.</li>
	<li>Each key in the grid has a matching lock.</li>
</ul>
</div>