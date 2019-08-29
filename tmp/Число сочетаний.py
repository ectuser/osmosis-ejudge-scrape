
def change(a):
    new = ""; last = new;
    if ("." in a):
        pos = a.find(".");
        for i in range(pos):
            new += a[i];
    if (last == new):
        return a;
    else:
        return new;

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

numbs = inp.read();

n, k = numbs.split();
n, k = int(n), int(k);
delta = n - k;
fn = 1; fk = 1; fDelta = 1;
for i in range(1, n + 1):
    if (i <= k):
        fk *= i;
    if (i <= delta):
        fDelta *= i;
    fn *= i;

c = fn / (fk * fDelta);

out.write(change(str(c)))


out.close()