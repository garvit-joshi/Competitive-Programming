def print_formatted(number):
    j=str(number)
    k=len(bin(number)[2:])
    for i in range(1,number+1):
        l=str(i)
        print (l.rjust(k),oct(i)[2:].rjust(k),hex(i).upper()[2:].rjust(k),bin(i)[2:].rjust(k))
