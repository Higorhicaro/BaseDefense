//g++ main.cpp -o main $(pkg-config --cflags --libs allegro-5.0 allegro_image-5.0)

#include "Soldier.h"

int main()
{
	ALLEGRO_DISPLAY *janela = NULL;
	ALLEGRO_EVENT_QUEUE *eventos = NULL;
	ALLEGRO_KEYBOARD_STATE KeyState;
	bool close = false;
	int tecla;

	al_init();

	janela = al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(255, 255, 255));

	Soldier soldier;

	al_flip_display();
	al_install_keyboard();

	eventos = al_create_event_queue();
	
	al_register_event_source(eventos, al_get_display_event_source(janela));
	al_register_event_source(eventos, al_get_keyboard_event_source());
	
	while(!close){
		ALLEGRO_EVENT evento;
		al_wait_for_event(eventos, &evento);
		al_get_keyboard_state(&KeyState);

		if (evento.type == ALLEGRO_EVENT_KEY_DOWN){
	    switch(evento.keyboard.keycode){
		    case ALLEGRO_KEY_UP:
		        tecla = 1;
		        break;
		    case ALLEGRO_KEY_DOWN:
		        tecla = 2;
		        break;
		    case ALLEGRO_KEY_LEFT:
		        tecla = 3;
		        break;
		    case ALLEGRO_KEY_RIGHT:
		        tecla = 4;
		        break;
	    }
		} else if(evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
		  close = true;
		}

		soldier.move(tecla);
		//al_clear_to_color(al_map_rgb(255, 255, 255));
		al_flip_display();
	}
	al_destroy_display(janela);
	al_destroy_event_queue(eventos);
	return 0;
}