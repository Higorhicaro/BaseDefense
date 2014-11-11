//g++ main.cpp -o main $(pkg-config --cflags --libs allegro-5.0 allegro_image-5.0)

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

int main()
{
	ALLEGRO_DISPLAY *janela = NULL;
	ALLEGRO_BITMAP *soldier = NULL;
	al_init();
	al_init_image_addon();
	janela = al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	soldier = al_load_bitmap("soldier.png");
	al_draw_bitmap(soldier, 10, 10, 0);
	al_flip_display();
	al_rest(30.0);
	return 0;
}