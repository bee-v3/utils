from lxml import etree

class SVGParser:
    """Object for extracting SVG data from a .svg file and outputting it to a file.

    Keyword Arguments:
        - prog -- 
    """
    def __init__(file: string, trunc=False, output="./"):
        self.output = output
        self.trunc = trunc
        self.file = file

    def parse_file():
        f = etree.parse(file)
        print(f.findall("d"))
    
    def write_results():

    def format_paths():
    
    def resize_paths(res: int):

