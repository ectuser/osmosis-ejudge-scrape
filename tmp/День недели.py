inp = open('input.txt', 'r')
out = open('output.txt', 'w')

week = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
day = int(inp.read())
out.write(week[day - 1])

out.close()