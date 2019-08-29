inp = open('input.txt', 'r')
out = open('output.txt', 'w')

numbs = inp.read()
h, m = numbs.split()
h = float(h); m = float(m)

hDegrees = 30 * h
mDegrees = 6 * m

delta = int(abs(hDegrees - mDegrees))
anotherDelta = 360 - delta

if (delta < anotherDelta):
    out.write(str(delta))
else:
    out.write(str(anotherDelta))


out.close()