import random

blocks = []
for i in range(1,11):
    num = random.randint(0,6)
    blocks.append(num)

print(blocks)

def bubblesort(array):
    for i in range(0,10):
        for j in range(0,10):
            if array[i] < array[j]:
                array[i], array[j] = array[j], array[i]


bubblesort(blocks)
print(blocks)  
