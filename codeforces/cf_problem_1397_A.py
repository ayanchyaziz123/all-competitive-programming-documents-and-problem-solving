numTests = int(input())
for testNo in range(numTests):
	n = int(input())
	cnt = [0 for i in range(26)]
	for _ in range(n):
	    s = input()
	    for i in s:
	        cnt[ord(i) - 97] += 1

	ans = True
	for i in range(26):
	    if cnt[i] % n != 0:
	        ans = False
	        break

	if ans:
	    print('YES')
	else:
	    print('NO')