//////////////////////////////////////////
//	 This class is core of this game.   //
//	 It's Game engine.					//
//////////////////////////////////////////

//////////////////////////////////////////////////
//	Object list that used by dynamic allocated  //
//		- window								//
//      - states								//
//////////////////////////////////////////////////

#pragma once

#include "MainMenuState.h"

class Game
{
private:
	//Variable
	sf::RenderWindow* window;
	sf::Event event;
	
	sf::Clock clock;
	float dt;

	std::stack<State*> states;

	std::map<std::string, int> supportedKeys;

	//Resource
	std::map<std::string, sf::SoundBuffer> musicBuffer;
	std::map<std::string, sf::Sound> music;

	//Initialization
	void initVariable();
	void initWindow();
	void initKeys();

	void initMusicList();
	void initStates();

public:
	//Constructor , Destructor
	Game();
	virtual ~Game();

	void run();

	//update
	void updateGame();
	void updateDeltatime();
	void updateEvent();

	//render
	void renderGame();

	void endGame();
};

