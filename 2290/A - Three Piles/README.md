<h2><a href="https://codeforces.com/contest/2290/problem/A" target="_blank" rel="noopener noreferrer">2290A — Three Piles</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2290A](https://codeforces.com/contest/2290/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Three Piles</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p> </p><p>There are three piles of stones. The first pile contains $$$a$$$ stones, the second pile contains $$$b$$$ stones, and the third pile contains $$$c$$$ stones.</p><p>You must make <span class="tex-font-style-bf">exactly one</span> move: take one stone from one of the piles and put it on one of the other two piles. You cannot skip this move, and you cannot make more than one move.</p><p>Determine whether you can make this move so that all three piles contain the same number of stones.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.</p><p>The only line of each test case contains three integers $$$a$$$, $$$b$$$, and $$$c$$$ ($$$1 \le a \le b \le c \le 10$$$) — the numbers of stones in the first, second, and third piles.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" if you can make the move so that all three piles contain the same number of stones, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be recognized as positive responses.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0022283260990999343" id="id0009233750786782347" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="6
1 2 3
2 2 2
3 4 5
1 1 4
8 9 10
3 5 7
" id="id0022283260990999343"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 2 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 2 2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3 4 5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 1 4</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">8 9 10</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">3 5 7</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id001572569195062059" id="id0047210999448194013" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="YES
NO
YES
NO
YES
NO
" id="id001572569195062059"><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">YES</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">NO</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">YES</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">NO</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">YES</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">NO</div></pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, you can take a stone from the third pile and put it on the first pile. Then each pile contains $$$2$$$ stones.</p><p>In the second test case, all piles already contain the same number of stones. However, a move is mandatory, and after any move the piles no longer contain the same number of stones.</p><p>In the fourth test case, two moves would be enough to make each pile contain $$$2$$$ stones, but only one move is allowed. After any single move, the piles do not contain the same number of stones.</p></div>