<h2><a href="https://codeforces.com/contest/1360/problem/D" target="_blank" rel="noopener noreferrer">1360D — Buying Shovels</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1360D](https://codeforces.com/contest/1360/problem/D) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Buying Shovels</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp wants to buy <span class="tex-font-style-bf">exactly</span> $$$n$$$ shovels. The shop sells packages with shovels. The store has $$$k$$$ types of packages: the package of the $$$i$$$-th type consists of exactly $$$i$$$ shovels ($$$1 \le i \le k$$$). The store has an infinite number of packages of each type.</p><p>Polycarp wants to choose <span class="tex-font-style-bf">one</span> type of packages and then buy several (one or more) packages of this type. What is the smallest number of packages Polycarp will have to buy to get exactly $$$n$$$ shovels?</p><p>For example, if $$$n=8$$$ and $$$k=7$$$, then Polycarp will buy $$$2$$$ packages of $$$4$$$ shovels.</p><p>Help Polycarp find the minimum number of packages that he needs to buy, given that he: </p><ul> <li> will buy exactly $$$n$$$ shovels in total; </li><li> the sizes of <span class="tex-font-style-bf">all</span> packages he will buy are all the same and the number of shovels in each package is an integer from $$$1$$$ to $$$k$$$, inclusive. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases in the input. Then, $$$t$$$ test cases follow, one per line.</p><p>Each test case consists of two positive integers $$$n$$$ ($$$1 \le n \le 10^9$$$) and $$$k$$$ ($$$1 \le k \le 10^9$$$) — the number of shovels and the number of types of packages.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ answers to the test cases. Each answer is a positive integer — the minimum number of packages.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0033600864556688614" id="id009574234865784219" class="input-output-copier">Copy</div></div><pre id="id0033600864556688614">5
8 7
8 1
6 10
999999733 999999732
999999733 999999733
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006836616371576077" id="id009074407806041808" class="input-output-copier">Copy</div></div><pre id="id006836616371576077">2
8
1
999999733
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The answer to the first test case was explained in the statement.</p><p>In the second test case, there is only one way to buy $$$8$$$ shovels — $$$8$$$ packages of one shovel.</p><p>In the third test case, you need to buy a $$$1$$$ package of $$$6$$$ shovels.</p></div>