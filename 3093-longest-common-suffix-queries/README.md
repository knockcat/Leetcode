<h2><a href="https://leetcode.com/problems/longest-common-suffix-queries/">3093. Longest Common Suffix Queries</a></h2><h3>Hard</h3><hr><div><p>You are given two arrays of strings <code>wordsContainer</code> and <code>wordsQuery</code>.</p>

<p>For each <code>wordsQuery[i]</code>, you need to find a string from <code>wordsContainer</code> that has the <strong>longest common suffix</strong> with <code>wordsQuery[i]</code>. If there are two or more strings in <code>wordsContainer</code> that share the longest common suffix, find the string that is the <strong>smallest</strong> in length. If there are two or more such strings that have the <strong>same</strong> smallest length, find the one that occurred <strong>earlier</strong> in <code>wordsContainer</code>.</p>

<p>Return <em>an array of integers </em><code>ans</code><em>, where </em><code>ans[i]</code><em> is the index of the string in </em><code>wordsContainer</code><em> that has the <strong>longest common suffix</strong> with </em><code>wordsQuery[i]</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">wordsContainer = ["abcd","bcd","xbcd"], wordsQuery = ["cd","bcd","xyz"]</span></p>

<p><strong>Output:</strong> <span class="example-io">[1,1,1]</span></p>

<p><strong>Explanation:</strong></p>

<p>Let's look at each <code>wordsQuery[i]</code> separately:</p>

<ul>
	<li>For <code>wordsQuery[0] = "cd"</code>, strings from <code>wordsContainer</code> that share the longest common suffix <code>"cd"</code> are at indices 0, 1, and 2. Among these, the answer is the string at index 1 because it has the shortest length of 3.</li>
	<li>For <code>wordsQuery[1] = "bcd"</code>, strings from <code>wordsContainer</code> that share the longest common suffix <code>"bcd"</code> are at indices 0, 1, and 2. Among these, the answer is the string at index 1 because it has the shortest length of 3.</li>
	<li>For <code>wordsQuery[2] = "xyz"</code>, there is no string from <code>wordsContainer</code> that shares a common suffix. Hence the longest common suffix is <code>""</code>, that is shared with strings at index 0, 1, and 2. Among these, the answer is the string at index 1 because it has the shortest length of 3.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">wordsContainer = ["abcdefgh","poiuygh","ghghgh"], wordsQuery = ["gh","acbfgh","acbfegh"]</span></p>

<p><strong>Output:</strong> <span class="example-io">[2,0,2]</span></p>

<p><strong>Explanation:</strong></p>

<p>Let's look at each <code>wordsQuery[i]</code> separately:</p>

<ul>
	<li>For <code>wordsQuery[0] = "gh"</code>, strings from <code>wordsContainer</code> that share the longest common suffix <code>"gh"</code> are at indices 0, 1, and 2. Among these, the answer is the string at index 2 because it has the shortest length of 6.</li>
	<li>For <code>wordsQuery[1] = "acbfgh"</code>, only the string at index 0 shares the longest common suffix <code>"fgh"</code>. Hence it is the answer, even though the string at index 2 is shorter.</li>
	<li>For <code>wordsQuery[2] = "acbfegh"</code>, strings from <code>wordsContainer</code> that share the longest common suffix <code>"gh"</code> are at indices 0, 1, and 2. Among these, the answer is the string at index 2 because it has the shortest length of 6.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= wordsContainer.length, wordsQuery.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= wordsContainer[i].length &lt;= 5 * 10<sup>3</sup></code></li>
	<li><code>1 &lt;= wordsQuery[i].length &lt;= 5 * 10<sup>3</sup></code></li>
	<li><code>wordsContainer[i]</code> consists only of lowercase English letters.</li>
	<li><code>wordsQuery[i]</code> consists only of lowercase English letters.</li>
	<li>Sum of <code>wordsContainer[i].length</code> is at most <code>5 * 10<sup>5</sup></code>.</li>
	<li>Sum of <code>wordsQuery[i].length</code> is at most <code>5 * 10<sup>5</sup></code>.</li>
</ul>
</div>