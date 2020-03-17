#include "Point.h"
#include "snake.h"
#include "Board.h"
#include <iostream>


using namespace std ;
//Constructeur par défault
snake::snake()
{

	for(int x = 0; x < longeur; x++)
	{
		serpent[x].setPoint(0,x);
	
	}

}


snake::snake(int x,int y)
{
	for(int d = 0; d < longeur; d++)
	{
		serpent[d].setPoint(x,d+y);
		
	}

}

// Fonctione ajoute un point dans le tableau serpent 
void snake::mangerPomme()
{
	longeur = longeur + 1;
	serpent[longeur].setPoint( serpent[longeur-1].getX() , serpent[longeur-1].getY()  );
}
// afficher le serpent
void snake::affichSerpent(){


	for(int d = 0; d < longeur; d++)
	{
		serpent[d].drawPoint();
		
	}

}
// fonction de mouvement pour le serpent 
void snake::move(int direction)
{
    for(int d = longeur; d > 0 ; d--)
	{
	    serpent[d].erasePoint();
		serpent[d] = serpent[d-1];
		
	} 
	
    if(direction == 1)
    {
        serpent[0].moveUp();
    }
    
    else if(direction == 2)
    {
        serpent[0].moveDown();
    }
    else if(direction == 3)
    {
        serpent[0].moveLeft();
    }
     else if(direction == 4)
    {
        serpent[0].moveRight();
    }

}

