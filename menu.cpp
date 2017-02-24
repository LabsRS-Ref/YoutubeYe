#include "menu.hpp"

Menu::Menu()
{}

Menu::~Menu()
{}

void Menu::menuPrincipal()
{
  system("clear");
  cout << "====== YoutubEye ======\n\n";
  cout << "1. Ingresar nombre de usuario.\n\n";
  cout << "0. Salir\n";
  cout << "---------------------------------------\n";
  cout << "Opcion: ";
  cin >> opcion_;
}

void Menu::mostrarUsuario()
{
  system("./usuario.sh");
}

int Menu::salirPrograma()
{
  cout << "\nSaliendo del programa...\n\n";
  usleep(2000000);

  return 0;
}

void Menu::mostrarMenu()
{

  switch (opcion_)
  {
    case 1:
      mostrarUsuario();
    break;

    default:
      cout << "\nOpción Incorrecta...\n\n";
    break;

    case 0:
      salirPrograma();
  }
}
