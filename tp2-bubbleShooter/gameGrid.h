#include "bubbleShooterUtil.h"
#include "../SDL/SDL.h"
#include "bubble.h"

using namespace BubbleShooterUtil;

class GameGrid
{
private:

	static const int GRID_HEIGHT = 10;			//hauteur de la grille de jeu
	static const int GRID_WIDTH = 8;			//largueur de la grille de jeu

	SDL_Rect position;							//coordonn�es en pixels d'une case dans la grille
	Bubble bubble[GRID_HEIGHT][GRID_WIDTH];		//bulle contenue dans une case donn�e de la grille
	int offsetX;								//d�calage en X de la grille par rapport � la position (0,0)


public:

	//Constructeur et destructeur
	GameGrid(int bubbleDiameter);
	void freeSurfaces();

	//Fonctions utilitaires
	void initPosition(int bubbleDiameter, int line, int column);
	void insertLine(SDL_Surface *screen);
	void update(SDL_Surface *screen);
	bool checkBubbleCollisions(Bubble* activeBubble);
	bool checkActiveBubbleCollision(Bubble* activeBubble);
	bool manageCollision(Bubble* &activeBubble);
	void stickBubbleInGrid(Bubble* &activeBubble);
	
};