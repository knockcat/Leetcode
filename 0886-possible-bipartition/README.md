<h2><a href="https://leetcode.com/problems/possible-bipartition/">886. Possible Bipartition</a></h2><h3>Medium</h3><hr><div><p>We want to split a group of <code>n</code> people (labeled from <code>1</code> to <code>n</code>) into two groups of <strong>any size</strong>. Each person may dislike some other people, and they should not go into the same group.</p>

<p>Given the integer <code>n</code> and the array <code>dislikes</code> where <code>dislikes[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that the person labeled <code>a<sub>i</sub></code> does not like the person labeled <code>b<sub>i</sub></code>, return <code>true</code> <em>if it is possible to split everyone into two groups in this way</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 4, dislikes = [[1,2],[1,3],[2,4]]
<strong>Output:</strong> true
<strong>Explanation:</strong> group1 [1,4] and group2 [2,3].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 3, dislikes = [[1,2],[1,3],[2,3]]
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = 5, dislikes = [[1,2],[2,3],[3,4],[4,5],[1,5]]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2000</code></li>
	<li><code>0 &lt;= dislikes.length &lt;= 10<sup>4</sup></code></li>
	<li><code>dislikes[i].length == 2</code></li>
	<li><code>1 &lt;= dislikes[i][j] &lt;= n</code></li>
	<li><code>a<sub>i</sub> &lt; b<sub>i</sub></code></li>
	<li>All the pairs of <code>dislikes</code> are <strong>unique</strong>.</li>
</ul>
</div>