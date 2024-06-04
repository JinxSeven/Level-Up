while True:
    height = input("Height: ")
    if height.isdigit():
        height = int(height)
        if 0 < height < 9:
            break

for x in range (height):
    for z in range (height):
        if z < (height - x - 1):
            print(" ", end = "")
        else:
            print("*", end = "")
    print()

