#include <iostream>
using namespace std;

bool horoscope(int num);


int main() {
	
	int input;

	cin >> input;

	cout << "what is your sign" << endl;

	if (horoscope(input) == true) {

		cout << "happy birth day" << endl;

	}

	/*if (horoscope(input) == true) {



	}*/

	cout << "hi" << endl;

}
bool horoscope(int num) {

	if (num == 1) {

		cout << "Your zodiac sign is Aquarius." << endl;
		cout << "No idea what it stands for, but here's your horoscope." << endl;
		cout << "Some jerk that you know is gonna get waterboarded for Trump's testing on mexicans." << endl;

	}
	else if (num == 2) {

		cout << "Your zodiac sign is Pisces. I have no idea how to pronounce it, but here's your hororscope: You will find your true love in the near future, and will have a family with them." << endl;

	}
	else if (num == 3) {

		cout << "Your zodiac sign is Aries. Normal animal. Anyways, here's your hororscope: You will have an adventure that will open your eyes to new wonders of the world." << endl;


	}

	else if (num == 4) {

		cout << "Your zodiac sign is Taurus. Happy birthday, I guess. Anyways, here's your horoscope: A trial is coming, and it shall test your faith in your beliefs." << endl;
		return 1;

	}
	else if (num == 5) {

		cout << "Your zodiac sign is Gemini. I don't know if it's a human or not, but here's your hororscope: Someone you thought you knew will reveal their mask and show their true colors." << endl;
		return 0;

	}
	else if (num == 6) {

		cout << "Your zodiac is Cancer. No pun intended. Anyways, here's your hororscope: A disease shall strike the one you love most, but it'll be unclear if they die or live." << endl;

	}
	else if (num == 7) {

		cout << "Your zodiac is Cancer.

	}
	else if (num == 8) {



	}
	else if (num == 9) {



	}
	else if (num == 10) {



	}
	else if (num == 11) {



	}
	else if (num == 12) {



	}

}