#include <iostream>
#include <unistd.h>

using namespace std;

typedef unsigned short int mi_int;

class Menu
{

  mi_int opcion_;

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
