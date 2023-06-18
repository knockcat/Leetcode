<h2><a href="https://leetcode.com/problems/special-permutations/">2741. Special Permutations</a></h2><h3>Medium</h3><hr><div><p>You are given a&nbsp;<strong>0-indexed</strong>&nbsp;integer array&nbsp;<code>nums</code>&nbsp;containing&nbsp;<code>n</code>&nbsp;<strong>distinct</strong> positive integers. A permutation of&nbsp;<code>nums</code>&nbsp;is called special if:</p>

<ul>
	<li>For all indexes&nbsp;<code>0 &lt;= i &lt; n - 1</code>, either&nbsp;<code>nums[i] % nums[i+1] == 0</code>&nbsp;or&nbsp;<code>nums[i+1] % nums[i] == 0</code>.</li>
</ul>

<p>Return&nbsp;<em>the total number of special permutations.&nbsp;</em>As the answer could be large, return it&nbsp;<strong>modulo&nbsp;</strong><code>10<sup>9&nbsp;</sup>+ 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,6]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [3,6,2] and [2,6,3] are the two special permutations of nums.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,4,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [3,1,4] and [4,1,3] are the two special permutations of nums.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 14</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>