#include <iostream>
#include "Soldier.h"

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h> 

Soldier::Soldier(){
	posx = 50;
	posy = 50;
	damage = 1;
	life = 100;
	ammo = 20;
	lvl = 1;

	al_init();
	al_init_image_addon();

	img = al_load_bitmap("soldier_down.png");

	al_draw_bitmap(img, posx, posy, 0);
	
	al_install_keyboard();
}


int Soldier::getLife(){
	return life;
}

int Soldier::getAmmo(){
	return ammo;
}

int Soldier::getLvl(){
	return lvl;
}

void Soldier::setLife(int a){
	life += a;
}

void Soldier::setAmmo(int a){
	ammo += a;
}

void Soldier::setLvl(){
	lvl++;
}

void Soldier::move(int x){
	switch(x){
		case 1:
			posy -= 5;
			img = al_load_bitmap("soldier_up.png");
			break;
		case 2:
			posy += 5;
			img = al_load_bitmap("soldier_down.png");
			break;
		case 3:
			posx -= 5;
			img = al_load_bitmap("soldier_left.png");
			break;
		case 4:
			posx += 5;
			img = al_load_bitmap("soldier_right.png");
			break;
	}
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_bitmap(img, posx, posy, 0);
}

void Soldier::shoot(){

}