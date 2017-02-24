#include <iostream>
#include <unistd.h>

using namespace std;

class Menu
{

  int opcion_;

public:

  Menu();
  ~Menu();

  void menuPrincipal();
  void mostrarMenu();

private:

  void mostrarUsuario();
  void menuUsuario();
  void opcionesUsuario();
  int salirPrograma();

};
