#include "Shared.h"


//This class is similar to the "Wrappers" that Andy always has us writing. 

class Game
{

public:
	void Start();

private:
	bool Exit();
	void GameLoop();

	enum GameState
	{
		Uninitialized, LoadingScreen, Paused, Menu, Playing, Exit
	};


	sf::RenderWindow mWindow;



};