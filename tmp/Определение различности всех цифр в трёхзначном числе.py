inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a = inp.read()
if (a[0] != a[1] and a[0] != a[2] and a[1] != a[2]):
    out.write("1")
else:
    out.write("0")

out.close()