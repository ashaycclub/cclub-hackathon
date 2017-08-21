hr = input()
mi = input()

strs = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine']

def mins(d):
	if d == 15:
		return "quarter"
	elif d == 30:
		return "half"
	else:
		return strs[d] + " minutes" 

if mi == 0:
	print strs[hr] + " o' clock"
else:
	if mi > 30:
		print mins(60-mi) + ' to ' + strs[hr+1]
	else:
		print mins(mi) + ' past ' + strs[hr]
