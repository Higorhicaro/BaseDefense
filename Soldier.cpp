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
	img = al_load_bitmap("soldier.png");
	al_draw_bitmap(img, posx, posy, 0);
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

void Soldier::move(double x, double y){

}

void Soldier::shoot(){

}