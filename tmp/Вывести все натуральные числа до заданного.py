inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a = inp.read()
a = int(a)
for i in range(a):
    out.write(str(i + 1) + " ")

out.close()