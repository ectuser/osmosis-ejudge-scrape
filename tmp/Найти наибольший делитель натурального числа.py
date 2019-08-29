inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a = inp.read()
a = int(a)
maxDel = -1
for i in range(2, a):
    if (a % i == 0):
        out.write(str(a // i))
        break

out.close()