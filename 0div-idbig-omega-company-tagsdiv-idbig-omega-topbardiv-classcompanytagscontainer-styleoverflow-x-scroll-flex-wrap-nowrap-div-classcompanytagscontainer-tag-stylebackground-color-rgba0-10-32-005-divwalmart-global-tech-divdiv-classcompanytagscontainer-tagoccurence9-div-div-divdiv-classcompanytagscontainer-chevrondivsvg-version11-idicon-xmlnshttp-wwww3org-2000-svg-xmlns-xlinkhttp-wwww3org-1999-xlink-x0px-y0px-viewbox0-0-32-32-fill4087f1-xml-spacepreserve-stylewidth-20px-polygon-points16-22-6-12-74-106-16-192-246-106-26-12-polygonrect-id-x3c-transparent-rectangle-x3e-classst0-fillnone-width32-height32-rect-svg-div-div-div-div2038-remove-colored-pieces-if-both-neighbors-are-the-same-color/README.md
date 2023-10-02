<h2><a href="https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Walmart Global Tech</div><div class="companyTagsContainer--tagOccurence">9</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2038. Remove Colored Pieces if Both Neighbors are the Same Color</a></h2><h3>Medium</h3><hr><div><p>There are <code>n</code> pieces arranged in a line, and each piece is colored either by <code>'A'</code> or by <code>'B'</code>. You are given a string <code>colors</code> of length <code>n</code> where <code>colors[i]</code> is the color of the <code>i<sup>th</sup></code> piece.</p>

<p>Alice and Bob are playing a game where they take <strong>alternating turns</strong> removing pieces from the line. In this game, Alice moves<strong> first</strong>.</p>

<ul>
	<li>Alice is only allowed to remove a piece colored <code>'A'</code> if <strong>both its neighbors</strong> are also colored <code>'A'</code>. She is <strong>not allowed</strong> to remove pieces that are colored <code>'B'</code>.</li>
	<li>Bob is only allowed to remove a piece colored <code>'B'</code> if <strong>both its neighbors</strong> are also colored <code>'B'</code>. He is <strong>not allowed</strong> to remove pieces that are colored <code>'A'</code>.</li>
	<li>Alice and Bob <strong>cannot</strong> remove pieces from the edge of the line.</li>
	<li>If a player cannot make a move on their turn, that player <strong>loses</strong> and the other player <strong>wins</strong>.</li>
</ul>

<p>Assuming Alice and Bob play optimally, return <code>true</code><em> if Alice wins, or return </em><code>false</code><em> if Bob wins</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> colors = "AAABABB"
<strong>Output:</strong> true
<strong>Explanation:</strong>
A<u>A</u>ABABB -&gt; AABABB
Alice moves first.
She removes the second 'A' from the left since that is the only 'A' whose neighbors are both 'A'.

Now it's Bob's turn.
Bob cannot make a move on his turn since there are no 'B's whose neighbors are both 'B'.
Thus, Alice wins, so return true.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> colors = "AA"
<strong>Output:</strong> false
<strong>Explanation:</strong>
Alice has her turn first.
There are only two 'A's and both are on the edge of the line, so she cannot move on her turn.
Thus, Bob wins, so return false.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> colors = "ABBBBBBBAAA"
<strong>Output:</strong> false
<strong>Explanation:</strong>
ABBBBBBBA<u>A</u>A -&gt; ABBBBBBBAA
Alice moves first.
Her only option is to remove the second to last 'A' from the right.

ABBBB<u>B</u>BBAA -&gt; ABBBBBBAA
Next is Bob's turn.
He has many options for which 'B' piece to remove. He can pick any.

On Alice's second turn, she has no more pieces that she can remove.
Thus, Bob wins, so return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;colors.length &lt;= 10<sup>5</sup></code></li>
	<li><code>colors</code>&nbsp;consists of only the letters&nbsp;<code>'A'</code>&nbsp;and&nbsp;<code>'B'</code></li>
</ul>
</div>