#pragma once
#include "BaseCharacter.h"
#include "PlayerController.h"
class PlayerCharacter :
	private BaseCharacter
{
protected:
	PlayerController *playerController;
public:
	PlayerCharacter();
	PlayerCharacter(PlayerController controller);
	PlayerCharacter(int player, int control);
	/*if (playerController)
		ControlaPlayer();
	else
		ControlaAI();*/

};

