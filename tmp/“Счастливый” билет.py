inp = open('input.txt', 'r')
out = open('output.txt', 'w')

numb = inp.read()
left = int(numb[0]) + int(numb[1]) + int(numb[2])
right = int(numb[3]) + int(numb[4]) + int(numb[5])
if(left == right):
    out.write("1")
else:
    out.write("0")

out.close()