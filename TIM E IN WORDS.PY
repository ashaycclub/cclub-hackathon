#!/bin/python

import sys


h= int(raw_input().strip())
m= int(raw_input().strip())
word = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine']

def mins(x):
	if x == 15:
		return "quarter"
	elif x == 30:
		return "half"
	else:
		return word[x] + " minutes" 
if m == 0:
	print word[h] + " o' clock"
else:
	if m > 30:
		print mins(60-m) + " to " + word[h+1]
	else:
		print mins(m) +" past " + word[h]
