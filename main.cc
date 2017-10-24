#include "game.h"

#include "splits_screen.h"

int main(int, char**) {
  Game::Config config;

  config.graphics.title = "splits";
  config.graphics.width = 340;
  config.graphics.height = 480;
  config.graphics.fullscreen = false;

  SplitsScreen *s = new SplitsScreen();

  // TODO load splits from command line
  s->load("content/z2allkeys.txt");

  Game game(config);
  game.loop(s);

  return 0;
}
