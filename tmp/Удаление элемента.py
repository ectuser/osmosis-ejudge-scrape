inp = open('input.txt', 'r')
out = open('output.txt', 'w')

numbs = inp.read();
A = numbs.split();

delEl = int(A[len(A) - 1]);

A.pop(delEl);
print(A)
for i in range(1, len(A) - 1):
    out.write(A[i] + " ");

out.close()