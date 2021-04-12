from http.server import HTTPServer, BaseHTTPRequestHandler


class reqHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        webpath = "../html/"
        self.send_header("content-type", "text/html")
        if self.path == '/':
            self.path = "/index.html"
        try:
            req_file = open(webpath+self.path[1:]).read()
            self.send_response(200)
        except:
            req_file = open(webpath+"404.html").read()
            self.send_response(404)        
        self.end_headers()
        self.wfile.write(bytes(req_file, 'utf-8'))

def main():
    PORT = 8080
    server = HTTPServer(("localhost", PORT), reqHandler)
    print("Server instance created on port", PORT)
    server.serve_forever()