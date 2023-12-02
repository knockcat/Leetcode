<h2><a href="https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Karat</div><div class="companyTagsContainer--tagOccurence">12</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Indeed</div><div class="companyTagsContainer--tagOccurence">6</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">2</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1160. Find Words That Can Be Formed by Characters</a></h2><h3>Easy</h3><hr><div><p>You are given an array of strings <code>words</code> and a string <code>chars</code>.</p>

<p>A string is <strong>good</strong> if it can be formed by characters from chars (each character can only be used once).</p>

<p>Return <em>the sum of lengths of all good strings in words</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> words = ["cat","bt","hat","tree"], chars = "atach"
<strong>Output:</strong> 6
<strong>Explanation:</strong> The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> words = ["hello","world","leetcode"], chars = "welldonehoneyr"
<strong>Output:</strong> 10
<strong>Explanation:</strong> The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 1000</code></li>
	<li><code>1 &lt;= words[i].length, chars.length &lt;= 100</code></li>
	<li><code>words[i]</code> and <code>chars</code> consist of lowercase English letters.</li>
</ul>
</div>