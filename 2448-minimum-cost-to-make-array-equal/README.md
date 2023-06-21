<h2><a href="https://leetcode.com/problems/minimum-cost-to-make-array-equal/">2448. Minimum Cost to Make Array Equal</a></h2><h3>Hard</h3><hr><div><p>You are given two <strong>0-indexed</strong> arrays <code>nums</code> and <code>cost</code> consisting each of <code>n</code> <strong>positive</strong> integers.</p>

<p>You can do the following operation <strong>any</strong> number of times:</p>

<ul>
	<li>Increase or decrease <strong>any</strong> element of the array <code>nums</code> by <code>1</code>.</li>
</ul>

<p>The cost of doing one operation on the <code>i<sup>th</sup></code> element is <code>cost[i]</code>.</p>

<p>Return <em>the <strong>minimum</strong> total cost such that all the elements of the array </em><code>nums</code><em> become <strong>equal</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,2], cost = [2,3,1,14]
<strong>Output:</strong> 8
<strong>Explanation:</strong> We can make all the elements equal to 2 in the following way:
- Increase the 0<sup>th</sup> element one time. The cost is 2.
- Decrease the 1<sup><span style="font-size: 10.8333px;">st</span></sup> element one time. The cost is 3.
- Decrease the 2<sup>nd</sup> element three times. The cost is 1 + 1 + 1 = 3.
The total cost is 2 + 3 + 3 = 8.
It can be shown that we cannot make the array equal with a smaller cost.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,2,2,2,2], cost = [4,2,8,1,3]
<strong>Output:</strong> 0
<strong>Explanation:</strong> All the elements are already equal, so no operations are needed.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length == cost.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], cost[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>