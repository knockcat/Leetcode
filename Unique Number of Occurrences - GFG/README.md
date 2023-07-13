# Unique Number of Occurrences
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>arr</strong> of <strong>N</strong> integers, the task is to check whether the frequency of the elements in the array is unique or not. Or in other words, there are no two <strong>distinct</strong> numbers in array with equal frequency. If all the frequency is unique then return <strong>true</strong>, else return <strong>false</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 14pt;"><strong>I</strong><strong>nput:</strong>
N = 5<br>arr = [1, 1, 2, 5, 5]
<strong>Output:</strong>
false
<strong>Explanation:<br></strong>The array contains 2 (1’s), 1 (2’s) and 2 (5’s), since the number of frequency of 1 and 5 are the same i.e. 2 times. Therefore, this array does not satisfy the condition.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 14pt;"><strong>Input:</strong>
N = 10<br>arr = [2, 2, 5, 10, 1, 2, 10, 5, 10, 2]
<strong>Output:</strong>
true
<strong>Explanation:</strong>
Number of 1’s -&gt; 1
Number of 2’s -&gt; 4
Number of 5’s -&gt; 2
Number of 10’s -&gt; 3.
Since, the number of occurrences of elements present in the array is unique. Therefore, this array satisfy the condition.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 14pt;"><strong>Your task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>isFrequencyUnique()</strong> which take integer <strong>N</strong> and array <strong>arr</strong> of size N as arguments, and returns a boolean.</span></p>
<p><span style="font-size: 14pt;"><strong style="font-size: 18px;">Expected Time Complexity:</strong><span style="font-size: 18px;">&nbsp;O(N)</span><br style="font-size: 18px;"><strong style="font-size: 18px;">Expected Auxiliary Space:</strong><span style="font-size: 18px;">&nbsp;O(N)</span></span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= N &lt;=10<sup>5</sup><br>-10<sup>9</sup> &lt;= arr[i] &lt;= 10<sup>9</sup></span></p></div>