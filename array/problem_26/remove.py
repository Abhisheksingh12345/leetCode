def remove(myints) :
    l = []
    l.append(myints[0])
    for i in range(1, len(myints)) :
        if l[len(l)-1] != myints[i]:
            l.append(myints[i])
    return len(l)
myints = [1, 2, 2, 3]
print(remove(myints))
