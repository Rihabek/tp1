#include <SDL2/SDL.h>

#include"fonctions_SDL.h"



SDL_Texture* charger_image(const char* nomfichier, SDL_Renderer*renderer)
{
  nomfichier->fond = load_image( "fond.bmp",renderer);

}
