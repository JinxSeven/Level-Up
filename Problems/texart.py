import sys
import argparse
from pyfiglet import Figlet

def main():
    arg = argparse.ArgumentParser(description="Generate ASCII Texart", epilog="Usage: python <scriptname>.py -f <fontname>")
    arg.add_argument("-f", "--font", help=argparse.SUPPRESS)
    argument = arg.parse_args()
    
    if 1 < len(sys.argv) != 3:
        sys.stderr.write("Command-line arguments provided are invalid.")
        sys.exit(1)
    
    font = argument.font if argument.font else "poison"
    text = input("Text: ")
    output = Figlet(font=f'{font}')
    print(output.renderText(f'{text}'))
    
main()