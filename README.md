                                            D. Distinct Characters Queries
                                            time limit per test2 seconds
                                            memory limit per test256 megabytes
                                            inputstandard input
                                            outputstandard output
You are given a string s consisting of lowercase Latin letters and q queries for this string.

Recall that the substring s[l;r] of the string s is the string slsl+1…sr. For example, the substrings of "codeforces" are "code", "force", "f", "for", but not "coder" and "top".

There are two types of queries:

1 pos c (1≤pos≤|s|, c is lowercase Latin letter): replace spos with c (set spos:=c);
2 l r (1≤l≤r≤|s|): calculate the number of distinct characters in the substring s[l;r].
Input
The first line of the input contains one string s consisting of no more than 105 lowercase Latin letters.

The second line of the input contains one integer q (1≤q≤105) — the number of queries.

The next q lines contain queries, one per line. Each query is given in the format described in the problem statement. It is guaranteed that there is at least one query of the second type.

Output
For each query of the second type print the answer for it — the number of distinct characters in the required substring in this query.

Examples
inputCopy
abacaba
5
2 1 4
1 4 b
1 5 b
2 4 6
2 1 7
outputCopy
3
1
2
inputCopy
dfcbbcfeeedbaea
15
1 6 e
1 4 b
2 6 14
1 7 b
1 12 c
2 6 8
2 1 6
1 7 c
1 2 f
1 10 a
2 7 9
1 10 a
1 14 b
1 1 f
2 1 11
outputCopy
5
2
5
2
6
