#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

int main()
{
	ALLEGRO_DISPLAY *janela = NULL;
	ALLEGRO_BITMAP *soldier = NULL;
	al_init();
	al_init_image_addon();
	janela = al_create_display(640, 480);
	soldier = al_load_bitmap("soldier.png");
	//al_draw_bitmap(soldier, 0, 0, 0);
	al_flip_display();
	al_rest(30.0);
	return 0;
}