testes = int(input())
numbers = []
for i in range(testes):
    total_numbers = int(input())
    numbers = [int(z) for z in input().split()]
    numbers = sorted(filter(lambda y: y % 2 != 0, numbers))
    ordered = []
    for z in range(len(numbers)):
        if z%2 == 0:
            numbers.sort(reverse=True)
            ordered.append(numbers[0])
        else:
            numbers.sort()
            ordered.append(numbers[0])

        numbers.pop(0)
        if len(numbers) == 0:
            break

    for x in range(len(ordered)):
        print("{0}".format(ordered[x]), end='')
        if x+1 != len(ordered):
              print(" ", end='')
    print("\n", end='')
            
    
        
