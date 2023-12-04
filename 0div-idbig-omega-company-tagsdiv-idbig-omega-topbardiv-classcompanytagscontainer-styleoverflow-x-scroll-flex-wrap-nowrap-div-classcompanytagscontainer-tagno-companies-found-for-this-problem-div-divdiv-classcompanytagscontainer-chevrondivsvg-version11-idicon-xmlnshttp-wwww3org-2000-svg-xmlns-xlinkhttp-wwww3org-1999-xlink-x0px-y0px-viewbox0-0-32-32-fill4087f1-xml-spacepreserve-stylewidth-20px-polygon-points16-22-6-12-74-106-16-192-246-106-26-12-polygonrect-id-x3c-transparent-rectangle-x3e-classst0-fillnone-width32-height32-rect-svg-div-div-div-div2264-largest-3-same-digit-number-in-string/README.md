<h2><a href="https://leetcode.com/problems/largest-3-same-digit-number-in-string/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2264. Largest 3-Same-Digit Number in String</a></h2><h3>Easy</h3><hr><div><p>You are given a string <code>num</code> representing a large integer. An integer is <strong>good</strong> if it meets the following conditions:</p>

<ul>
	<li>It is a <strong>substring</strong> of <code>num</code> with length <code>3</code>.</li>
	<li>It consists of only one unique digit.</li>
</ul>

<p>Return <em>the <strong>maximum good </strong>integer as a <strong>string</strong> or an empty string </em><code>""</code><em> if no such integer exists</em>.</p>

<p>Note:</p>

<ul>
	<li>A <strong>substring</strong> is a contiguous sequence of characters within a string.</li>
	<li>There may be <strong>leading zeroes</strong> in <code>num</code> or a good integer.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> num = "6<strong><u>777</u></strong>133339"
<strong>Output:</strong> "777"
<strong>Explanation:</strong> There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> num = "23<strong><u>000</u></strong>19"
<strong>Output:</strong> "000"
<strong>Explanation:</strong> "000" is the only good integer.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> num = "42352338"
<strong>Output:</strong> ""
<strong>Explanation:</strong> No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= num.length &lt;= 1000</code></li>
	<li><code>num</code> only consists of digits.</li>
</ul>
</div>