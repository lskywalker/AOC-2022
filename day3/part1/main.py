f = open("input.txt")
letter = list()

for x in f:
	l = len(x)
	array = set(x[:l / 2])
	array2 = set(x[l / 2:-1])
	letter.append((''.join(sorted(array.intersection(array2)))))

points = 0

for x in letter:
	if ord(x[0]) >= 97:
		points += (ord(x[0]) - 96)
	else:
		points += (ord(x[0]) - 38)

print('Total points: '+str(points))

f.close()