/*
 * Game.h
 *  Author: Daniel Ben Itzhak
 *      338017437
 */

#ifndef GAME_H_
#define GAME_H_

#include "GameLogic.h"
#include "GraphicInterface.h"

/******************************************************
GameClass, object that holds the necessary members for running Games,
as well as controlling their flow
********************************************************/
class Game {
public:
	//Methods

	/******************************************************
	*Function name: Game()
	*The input: GraphicInterface derived class
	*The output: Game object
	*The function operation: Constructor
	********************************************************/
	Game(GraphicInterface *gi);

	/******************************************************
	*Function name: start()
	*The input: None
	*The output:None
	*The function operation: Starts the game loop
	********************************************************/
	void start();

	/******************************************************
	*Function name: setGraphicProvider()
	*The input: GraphicInterface derived class
	*The output:None
	*The function operation: Setter for the Graphic Provider
	********************************************************/
	void setGraphicProvider(const GraphicInterface *graphicProvider);

private:
	//Methods
	/******************************************************
	*Function name: playOneMatch()
	*The input: GameLogic derived class,two Player's derived objects
	*The output:None
	*The function operation: Starts the match loop, for the specific players and GameLogic derived class
	********************************************************/
	void playOneMatch(GameLogic* gl, Player* p1, Player* p2);

	// Unimplemented - void startOver(); //restarts match
	//Members
	const GraphicInterface *graphicProvider;

};

#endif /* GAME_H_ */
