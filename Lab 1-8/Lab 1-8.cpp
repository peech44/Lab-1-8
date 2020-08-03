// Lab 1-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

void main() {

	list<int>game;

	int n = 0; //n = people
	int m = 0;//m = pass
	int p = 0;//p = count
	cout << "Welcome to potato game" << endl;
	cout << "input people " << endl;
	cin >> n;


	for (int i = 1; i <= n; i++) {
		game.push_back(i);
	}
	cout << "game size is " << game.size() << endl;

	cout << "input pass" << endl;
	cin >> m;

	list<int>::iterator x = game.begin();

	while (game.size() > 1) {

		if (x == game.end()) {
			x = game.begin();
		}
		if (p == m) {
			p = 0; //reset counter
			cout << *x << " out!! ";
			x = game.erase(x);
			if (x == game.end()) {
				x = game.begin();
			}
			//who Survive

			for (x = game.begin(); x != game.end(); x++) {
				cout << *x;
			}
			cout << endl;
		}
		p++;

		if (game.size() == 2) {
			break;
		}
		if (x != game.end()) {

			x++; // Move Pointer

		}

	}

	cout << "Winner is : " << game.front() << endl;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
