inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a = inp.read()
a = int(a)
minDel = -1
for i in range(2, a):
    if (a % i == 0):
        out.write(str(i))
        break 

out.close()