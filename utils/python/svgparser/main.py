import sys
import svgparser
from argparse import ArgumentParser

class ArgumentParser(ArgumentParser):

    def error(self, message):
        self.print_help(sys.stderr)
        self.exit(2, '%s: error: %s\n' % (self.prog, message))

def arg_parser():
    parser = ArgumentParser(description="Parse an svg file and extract the paths to a specified file")
    parser.add_argument("-r", "--resize", help="Value to scale the extracted paths by. ex: -r 1.3 to increase path sizae by 30%%", type=int, default=1)
    parser.add_argument("-o", "--output", nargs="?", help="Path where the output file is written to", const="./", default="./")
    parser.add_argument("-t", "--trunc", help="Overwrite target file if it exists", action="store_true")
    requiredNamed = parser.add_argument_group("required named arguments")
    requiredNamed.add_argument("-f","--file", help="Path to the file you wish to parse", required=True)
    return parser.parse_args()

def main():
    p = arg_parser()
    
    exit()

if __name__ == "__main__":    
    main()