#include <iostream>
#include <thread>
#include <string>
#include <chrono>

using namespace std;

int main() {
	bool started = true;
	string question = "";
	cout << "-------Welcome and thanks for using HuhBot!-------\n";
	while (started) {
		cout << "=> Ask your question:\n";
		cout << "==> ";
		getline(cin, question);
		if (question == "exit") break;
		cout << "->Thinking...\n";
		this_thread::sleep_for(chrono::seconds(5));
		cout << "\n=> Huh\n\n";
		this_thread::sleep_for(chrono::seconds(1));
	}
	return 0;
}