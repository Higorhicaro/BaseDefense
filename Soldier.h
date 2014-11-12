#ifndef _SOLDIER_H_
#define _SOLDIER_H_

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h> 

class Soldier{
	double posx, posy;
	int damage;
	int life;
	int ammo;
	int lvl;
	ALLEGRO_BITMAP *img;

	public:
		Soldier();
		~Soldier(){};
		int getLife();
		int getAmmo();
		int getLvl();
		void setLife(int a);
		void setAmmo(int a);
		void setLvl();
		void move(int);
		void shoot();
};

#endif