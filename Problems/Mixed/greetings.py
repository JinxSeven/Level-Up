def main():
    greet = input("Greeting: ")
    for x in range(len(greet)):
        if not greet[x].isalpha(): continue
        if greet[x] == 'h' or greet[x] == 'H':
            if greet[x:x + 5] == "Hello" or greet[x:x + 5] == "hello":
                print("$0")
                return
            else:
                print("$20")
                return
        else:
            print("$100")
            return

main()
