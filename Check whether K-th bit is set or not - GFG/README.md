# Check whether K-th bit is set or not
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a number <strong>N </strong>and a bit number <strong>K</strong>, check if <strong>K<sup>th</sup></strong>&nbsp;index bit of <strong>N </strong>is set or not. A bit is called set if it is 1. Position of set bit&nbsp;'1' should be indexed starting with 0&nbsp;from LSB side in&nbsp;binary representation of the number.</span><br><span style="font-size: 18px;"><strong>Note:</strong> Index is starting from 0. You just need to return <strong>true </strong>or <strong>false</strong>, driver code will take care of printing "Yes" and "No".</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: <br>N = 4<br>K = 0
<strong>Output</strong>: <br>No
<strong>Explanation</strong>: <br>Binary representation of 4 is 100, in which 0<sup>th</sup> index bit from LSB is not set. So, return false.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: <br>N = 4<br>K = 2
<strong>Output</strong>: <br>Yes
<strong>Explanation</strong>: <br>Binary representation of 4 is 100, in which 2<sup>nd</sup> index bit from LSB is set. So, return true.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><strong><span style="font-size: 18px;">Example 3:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: <br>N = 500<br>K = 3
<strong>Output</strong>: <br>No
<strong>Explanation</strong>: <br>Binary representation of 500 is 111110100, in which 3rd index bit from LSB is not set. So, return false.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<div><strong><span style="font-size: 18px;">Your task:</span></strong></div>
<div><span style="font-size: 18px;">You don't have to read input or print anything. Your task is&nbsp;to complete the function<strong> checkKthbit </strong>that takes <strong>n </strong>and<strong> k </strong>as parameters and returns<strong> </strong>either <strong>true</strong>(if kth bit is set) or <strong>false</strong>(if kth bit is not set).</span><br><span style="font-size: 18px;"><strong><br>Expected Time Complexity:</strong>&nbsp;O(1).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>9</sup><br>0 ≤ K ≤ 31</span></div></div>