#include <iostream>

enum YearCode {
	NEGATIVE,
	OLD,
	YOUNG
};

class YearException: public std::exception {
	YearCode code;
public:
	YearException(YearCode code) : code(code) {}
	const char* what() const throw() {
		if (code == YearCode::NEGATIVE) return "Negative number!";
		else if (code == YearCode::OLD) return "People don`t live that long!";
		else if (code == YearCode::YOUNG) return "You haven`t born!";
	}
};

class Year {
	int health;
public:
	Year(int health) : health(health) {
		if (health < 0) throw YearException(YearCode::NEGATIVE);
		else if (health < 1850 ) throw YearException(YearCode::OLD);
		else if (health > 2022 ) throw YearException(YearCode::YOUNG);
	}
	int getHealth() {
		return this->health;
	}
	void setHealth(int health) {
		if (health < 0) throw YearException(YearCode::NEGATIVE);
		else if (health < 1850 ) throw YearException(YearCode::OLD);
		else if (health > 2022 ) throw YearException(YearCode::YOUNG);
		this->health = health;
	}
};
