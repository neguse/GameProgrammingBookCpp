#ifndef INCLUDED_MAINLOOP_H
#define INCLUDED_MAINLOOP_H

namespace Sequence {
class Title;
class GameOver;
class Ending;
namespace Game {
class Parent;
}  // namespace Game
}  // namespace Sequence

class MainLoop {
 public:
  enum NextSequence {
    NEXT_TITLE,
    NEXT_GAME,
    NEXT_GAME_OVER,
    NEXT_ENDING,

    NEXT_NONE,
  };
  enum Mode {
    MODE_1P,
    MODE_2P,
    MODE_NONE,
  };
  void update();
  void moveTo(NextSequence);
  Mode getMode() const;
  void setMode(Mode);

  static void create();
  static void destroy();
  static MainLoop* getInstance();

 private:
  MainLoop();
  ~MainLoop();

  NextSequence mNextSequence;
  Mode mMode;

  Sequence::Title* mTitle;
  Sequence::Game::Parent* mGame;
  Sequence::GameOver* mGameOver;
  Sequence::Ending* mEnding;

  static MainLoop* mInstance;
};

#endif