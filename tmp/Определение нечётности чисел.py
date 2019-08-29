inp = open('input.txt', 'r')
out = open('output.txt', 'w')

numbs = inp.read()
a, b = numbs.split()
a = int(a); b = int(b);
if ((a % 2 == 0 and b % 2 == 1) or (b % 2 == 0 and a % 2 == 1)):
    out.write("1")
else:
    out.write("0")


out.close()