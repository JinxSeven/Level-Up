import sys
import argparse
from pyfiglet import Figlet

def main():
    parser = argparse.ArgumentParser(description="Generate cool ASCII art text using a font.")
    parser.add_argument("-f", "--font", help="personal favorites: 'slant', 'lean', 'doh' http://www.figlet.org/examples.html", dest="fontname")
    argument = parser.parse_args()
    
    if 1 < len(sys.argv) != 3:
        sys.stderr.write("Command-line arguments provided are invalid.")
        sys.exit(1)
    
    font = argument.fontname if argument.fontname else "poison"
    text = input("Text: ")
    output = Figlet(font=f'{font}')
    print(output.renderText(f'{text}'))
    
main()