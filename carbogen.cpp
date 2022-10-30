#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void run_file(string);
void run_prompt();
void run(string);

int main(int argc, char const *argv[]) {
  if (argc > 2) cout << "Usage: .\\carbogen [script]";
  else if (argc == 2) run_file(argv[1]);
  else run_prompt();
  return 0;
}

void run_file(string path) {
  string content = "";
  string line;
  ifstream rfile;
  rfile.open(path);
  if (rfile.is_open()) {
    while (getline(rfile, line)) content += line + "\n";
    rfile.close();
  }
  run(content);
}

// private static void runPrompt() throws IOException {
//   InputStreamReader input = new InputStreamReader(System.in);
//   BufferedReader reader = new BufferedReader(input);

//   for (;;) { 
//     System.out.print("> ");
//     String line = reader.readLine();
//     if (line == null) break;
//     run(line);
//   }
// }
void run_prompt() {
  cout << "Carbogen v1.0 CBGN-REPL" << endl;
  while (true) {
    cout << "> ";
    string line;
    getline(cin, line);
    if (line == "") break;
    run(line);
  }
}

void run(string source) {
  if (source.rfind("out", 0) == 0) {
    cout << source << endl;
  }
}
