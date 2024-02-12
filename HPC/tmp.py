import os


prev = ''
times = []
with open("/home/champion/Projects/keldysh/for_outputs") as file:
    for a in file:
        if not a:
            continue
        if a.startswith("Time in seconds = "):
            a = a.replace("Time in seconds = ", "")
            times += [a]
        else:
            if prev:
                print(prev)
                print(''.join(times))
            prev = a
            times = []

print(prev)
print(''.join(times))
