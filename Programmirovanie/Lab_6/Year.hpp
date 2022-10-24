#include <iostream>

enum PlayerCode {
	NEGATIVE,
	BIG,
	ZERO
};

class PlayerException: public std::exception {
	PlayerCode code;
public:
	PlayerException(PlayerCode code) : code(code) {}
	const char* what() const throw() {
		if (code == PlayerCode::NEGATIVE) return "Health < 0";
		else if (code == PlayerCode::BIG) return "Health >100";
		else if (code == PlayerCode::ZERO) return "Health = 0";
	}
};

class Player {
	int health;
public:
	Player(int health) : health(health) {
		if (health < 0) throw PlayerException(PlayerCode::NEGATIVE);
		else if (health > 100) throw PlayerException(PlayerCode::BIG);
		else if (health == 0) throw PlayerException(PlayerCode::ZERO);
	}
	int getHealth() {
		return this->health;
	}
	void setHealth(int health) {
		if (health < 0) throw PlayerException(PlayerCode::NEGATIVE);
		else if (health > 100) throw PlayerException(PlayerCode::BIG);
		else if (health == 0) throw PlayerException(PlayerCode::ZERO);
		this->health = health;
	}
};
