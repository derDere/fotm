#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include <string>
#include <vector>
#include "nlohmann/json.hpp"

using namespace std;
using namespace nlohmann;

namespace menu {

  class Menu;
  class MenuItem;
  class Renderer;


  
  enum MenuItemType {
		     Text,
		     Command,
		     SubMenu,
		     ScriptOutput,
		     ScriptMenu
  };


  
  class Menu {
  public:
    vector<MenuItem*>* items;
    int selected;

    Menu();
    Menu(json*);
    ~Menu();
  };


  
  class MenuItem {
  public:
    string text;
    string command;
    vector<string>* lines;
    Menu subMenu;
    MenuItemType type;

    MenuItem();
    MenuItem(json*);
    ~MenuItem();
  };


  
  class Renderer {
  public:
    Menu* currentMenu;

    Renderer();
    Renderer(Menu*);
    ~Renderer();
  };

  
}

#endif
