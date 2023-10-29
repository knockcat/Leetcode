<h2><a href="https://leetcode.com/problems/minimum-increment-operations-to-make-array-beautiful/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2919. Minimum Increment Operations to Make Array Beautiful</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> having length <code>n</code>, and an integer <code>k</code>.</p>

<p>You can perform the following <strong>increment</strong> operation <strong>any</strong> number of times (<strong>including zero</strong>):</p>

<ul>
	<li>Choose an index <code>i</code> in the range <code>[0, n - 1]</code>, and increase <code>nums[i]</code> by <code>1</code>.</li>
</ul>

<p>An array is considered <strong>beautiful</strong> if, for any <strong>subarray</strong> with a size of <code>3</code> or <strong>more</strong>, its <strong>maximum</strong> element is <strong>greater than or equal</strong> to <code>k</code>.</p>

<p>Return <em>an integer denoting the <strong>minimum</strong> number of increment operations needed to make </em><code>nums</code><em> <strong>beautiful</strong>.</em></p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,0,0,2], k = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can perform the following increment operations to make nums beautiful:
Choose index i = 1 and increase nums[1] by 1 -&gt; [2,4,0,0,2].
Choose index i = 4 and increase nums[4] by 1 -&gt; [2,4,0,0,3].
Choose index i = 4 and increase nums[4] by 1 -&gt; [2,4,0,0,4].
The subarrays with a size of 3 or more are: [2,4,0], [4,0,0], [0,0,4], [2,4,0,0], [4,0,0,4], [2,4,0,0,4].
In all the subarrays, the maximum element is equal to k = 4, so nums is now beautiful.
It can be shown that nums cannot be made beautiful with fewer than 3 increment operations.
Hence, the answer is 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,1,3,3], k = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> We can perform the following increment operations to make nums beautiful:
Choose index i = 2 and increase nums[2] by 1 -&gt; [0,1,4,3].
Choose index i = 2 and increase nums[2] by 1 -&gt; [0,1,5,3].
The subarrays with a size of 3 or more are: [0,1,5], [1,5,3], [0,1,5,3].
In all the subarrays, the maximum element is equal to k = 5, so nums is now beautiful.
It can be shown that nums cannot be made beautiful with fewer than 2 increment operations.
Hence, the answer is 2.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,2], k = 1
<strong>Output:</strong> 0
<strong>Explanation:</strong> The only subarray with a size of 3 or more in this example is [1,1,2].
The maximum element, 2, is already greater than k = 1, so we don't need any increment operation.
Hence, the answer is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= n == nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= k &lt;= 10<sup>9</sup></code></li>
</ul>
</div>