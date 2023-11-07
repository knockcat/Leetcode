<h2><a href="https://leetcode.com/problems/eliminate-maximum-number-of-monsters/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1921. Eliminate Maximum Number of Monsters</a></h2><h3>Medium</h3><hr><div><p>You are playing a video game where you are defending your city from a group of <code>n</code> monsters. You are given a <strong>0-indexed</strong> integer array <code>dist</code> of size <code>n</code>, where <code>dist[i]</code> is the <strong>initial distance</strong> in kilometers of the <code>i<sup>th</sup></code> monster from the city.</p>

<p>The monsters walk toward the city at a <strong>constant</strong> speed. The speed of each monster is given to you in an integer array <code>speed</code> of size <code>n</code>, where <code>speed[i]</code> is the speed of the <code>i<sup>th</sup></code> monster in kilometers per minute.</p>

<p>You have a weapon that, once fully charged, can eliminate a <strong>single</strong> monster. However, the weapon takes <strong>one minute</strong> to charge. The weapon is fully charged at the very start.</p>

<p>You lose when any monster reaches your city. If a monster reaches the city at the exact moment the weapon is fully charged, it counts as a <strong>loss</strong>, and the game ends before you can use your weapon.</p>

<p>Return <em>the <strong>maximum</strong> number of monsters that you can eliminate before you lose, or </em><code>n</code><em> if you can eliminate all the monsters before they reach the city.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> dist = [1,3,4], speed = [1,1,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
In the beginning, the distances of the monsters are [1,3,4]. You eliminate the first monster.
After a minute, the distances of the monsters are [X,2,3]. You eliminate the second monster.
After a minute, the distances of the monsters are [X,X,2]. You eliminate the thrid monster.
All 3 monsters can be eliminated.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> dist = [1,1,2,3], speed = [1,1,1,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
In the beginning, the distances of the monsters are [1,1,2,3]. You eliminate the first monster.
After a minute, the distances of the monsters are [X,0,1,2], so you lose.
You can only eliminate 1 monster.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> dist = [3,2,4], speed = [5,3,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
In the beginning, the distances of the monsters are [3,2,4]. You eliminate the first monster.
After a minute, the distances of the monsters are [X,0,2], so you lose.
You can only eliminate 1 monster.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == dist.length == speed.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= dist[i], speed[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>