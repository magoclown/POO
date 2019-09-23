#include <iostream>
//#define DEBUG
#pragma onces
class Character
{
#pragma region Private Variables
private:
	char name[50]{"Character00"};
	int hitPoints{0};
	float position{0};
	int status{0};
#pragma endregion
public:
	Character();
	//Character(char name[50], int hitPoints, bool alive, float position, int status);
	Character(int hitPoints, float position, int status);
	
	void Move(float position);
	bool IsAlive();
	int GetStatus();

};

