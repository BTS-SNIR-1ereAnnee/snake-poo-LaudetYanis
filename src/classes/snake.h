#include <iostream>
#include "Point.h"
#include "Board.h"




class snake 
{
public:

// constructeur par défautl

	snake();
// constucteur 

	snake (int x, int y);

    void move(int direction); // déplacement du serpent
 
	
	void mangerPomme();
	/**
    *   dessine le point
    */
	void affichSerpent();
   
	
private: 
	
	Point serpent[50]; //point du serpent

	int longeur = 3; // longeur du serpent 

};
