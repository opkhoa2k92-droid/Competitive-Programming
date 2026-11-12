<h2><a href="https://codeforces.com/contest/2290/problem/B" target="_blank" rel="noopener noreferrer">2290B — Stubborn Pen</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2290B](https://codeforces.com/contest/2290/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Stubborn Pen</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A pen can write in two colors: red and blue. <span class="tex-font-style-bf">Initially, the pen writes in red.</span> Each time the pen writes a letter, its color switches automatically: after writing a red letter, it writes in blue, and after writing a blue letter, it writes in red.</p><p>Before writing each letter, including the first one, you may also switch the color of the pen manually: from red to blue or from blue to red.</p><p>You need to write a string $$$s$$$ of length $$$n$$$ consisting of the characters <span class="tex-font-style-tt">R</span> and <span class="tex-font-style-tt">B</span>. The letters are written one by one from left to right. The $$$i$$$-th letter must be written in red if $$$s_i = \texttt{R}$$$, and in blue if $$$s_i = \texttt{B}$$$.</p><p>Find the minimum number of manual switches needed to write the string.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$) — the length of the string.</p><p>The second line of each test case contains the string $$$s$$$ of length $$$n$$$, consisting only of the characters <span class="tex-font-style-tt">R</span> and <span class="tex-font-style-tt">B</span>.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print a single integer — the minimum number of manual switches.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005029906486924914" id="id008788909956775527" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="5
5
BRRBR
1
R
4
RBRB
3
BBB
6
RRBBRB
" id="id005029906486924914"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">BRRBR</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">R</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">RBRB</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">BBB</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">RRBBRB</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007388469134662365" id="id003429980694015119" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="2
0
0
3
2
" id="id007388469134662365"><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">0</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">0</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">2</div></pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, $$$s = \texttt{BRRBR}$$$.</p><ul> <li> Initially, the pen writes in red, but the first letter is blue, so the color is switched manually. </li><li> After the blue letter, the pen switches to red by itself. This is the right color for the second letter. </li><li> After that, the pen switches to blue by itself, but the third letter is red, so the color is switched manually a second time. </li><li> The last two letters are written without manual switches. </li></ul><p>So the answer is $$$2$$$.</p><p>In the third test case, the color switches by itself exactly as needed, so no manual switches are required.</p><p>In the fourth test case, the pen has the wrong color before each of the three letters: it is red at the start, and after each blue letter it switches to red by itself. So three manual switches are needed.</p></div>