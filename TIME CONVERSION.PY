
N = raw_input()
if N[8:] == "AM":
    if N[0:2] == "12":
        print "00" + N[2:8]
    else:
        print N[0:8]
else:
    if N[0:2] == "12":
        print N[0:8]
    else:
        print str(int(N[0:2]) + 12) + N[2:8]
