# Enter your code here. Read input from STDIN. Print output to STDOUT
s = raw_input()
s1 = s.lower()
s2 = list(set(s1))
if s2[0]==' ' and len(s2)==27:
	print "pangram"
else:
	print "not pangram"
