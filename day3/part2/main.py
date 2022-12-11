f = open("input.txt")
letters = list()
res = list()
letter = list()

for x in f:
	letters.append(x[:-1])

i = 0

while i < len(letters):
	array = set(letters[i])
	array2 = set(letters[i + 1])
	array3 = set(letters[i + 2])
	temp = set(''.join(sorted(array.intersection(array2))))
	letter.append((''.join(sorted(temp.intersection(array3)))))
	i += 3

points = 0

for x in letter:
	if ord(x[0]) >= 97:
		points += (ord(x[0]) - 96)
	else:
		points += (ord(x[0]) - 38)

print('Total points: '+str(points))

f.close()