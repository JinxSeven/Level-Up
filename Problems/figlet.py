import sys
import figlet

argument_one = ["-f", "--font"]

def main():
    if len(sys.argv) != 1 and len(sys.argv) != 3:
        print("Invalid useage")
        sys.exit(1)
    
main()