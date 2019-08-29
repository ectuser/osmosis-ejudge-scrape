
inp = open('input.txt', 'r')
out = open('output.txt', 'w')

numbs = inp.read();
array = numbs.split();

for i in range(len(array) - 1, -1, -1):
    out.write(array[i] + " ");


out.close()