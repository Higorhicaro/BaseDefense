//g++ main.cpp -o main $(pkg-config --cflags --libs allegro-5.0 allegro_image-5.0)

#include "Soldier.h"

int main()
{
	ALLEGRO_DISPLAY *janela = NULL;
	ALLEGRO_EVENT_QUEUE *eventos = NULL;
	bool close = false;
	al_init();
	janela = al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	Soldier soldier;
	al_flip_display();
	//al_rest(30.0);
	al_register_event_source(eventos, al_get_display_event_source(janela));
	
	while(!close){
		ALLEGRO_EVENT evento;
		al_wait_for_event(eventos, &evento);

		if(evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
		  close = true;
		}

		//Soldier soldier;
		//al_clear_to_color(al_map_rgb(255, 255, 255));
		//al_flip_display();
	}
	al_destroy_display(janela);
	al_destroy_event_queue(eventos);
	return 0;
}