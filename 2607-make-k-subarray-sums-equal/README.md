<h2><a href="https://leetcode.com/problems/make-k-subarray-sums-equal/">2607. Make K-Subarray Sums Equal</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> integer array <code>arr</code> and an integer <code>k</code>. The array <code>arr</code> is circular. In other words, the first element of the array is the next element of the last element, and the last element of the array is the previous element of the first element.</p>

<p>You can do the following operation any number of times:</p>

<ul>
	<li>Pick any element from <code>arr</code> and increase or decrease it by <code>1</code>.</li>
</ul>

<p>Return <em>the minimum number of operations such that the sum of each <strong>subarray</strong> of length </em><code>k</code><em> is equal</em>.</p>

<p>A <strong>subarray</strong> is a contiguous part of the array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [1,4,1,3], k = 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> we can do one operation on index 1 to make its value equal to 3.
The array after the operation is [1,3,1,3]
- Subarray starts at index 0 is [1, 3], and its sum is 4 
- Subarray starts at index 1 is [3, 1], and its sum is 4 
- Subarray starts at index 2 is [1, 3], and its sum is 4 
- Subarray starts at index 3 is [3, 1], and its sum is 4 
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [2,5,5,7], k = 3
<strong>Output:</strong> 5
<strong>Explanation:</strong> we can do three operations on index 0 to make its value equal to 5 and two operations on index 3 to make its value equal to 5.
The array after the operations is [5,5,5,5]
- Subarray starts at index 0 is [5, 5, 5], and its sum is 15
- Subarray starts at index 1 is [5, 5, 5], and its sum is 15
- Subarray starts at index 2 is [5, 5, 5], and its sum is 15
- Subarray starts at index 3 is [5, 5, 5], and its sum is 15 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>