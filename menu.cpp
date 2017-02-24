#include "menu.hpp"

Menu::Menu()
{}

Menu::~Menu()
{
  system("rm -r usuario.txt");
}

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

void Menu::opcionesUsuario()
{
  switch (opcion_)
  {
    case 1:
      system("clear");
      system("./ingresos.sh");
    break;

    case 2:
      system("clear");
      system("./monitorizacion.sh");
    break;

    case 3:
      system("clear");
      system("./descripcionUsuario.sh");
      cout << "-----------------------------------------------\n\n";
    break;

    default:
      cout << "\nOpción Incorrecta...\n";
    break;

    case 0:
      salirPrograma();
  }
}

void Menu::menuUsuario()
{
  while (opcion_ != 0)
  {
    cout << "=====================================\n";
    cout << "         DATOS DEL USUARIO\n\n";
    cout << "1. Ingresos mensuales estimados.\n";
    cout << "2. Monitorizar video.\n";
    cout << "3. Descripción general de usuario\n";
    cout << "\n0.Salir\n";
    cout << "-------------------------------------\n";
    cout << "Opcion: ";
    cin >> opcion_;

    opcionesUsuario();
  }
}

void Menu::mostrarUsuario()
{
  system("clear");
  system("./usuario.sh");
  cout << "-----------------------------------------------\n\n";
  menuUsuario();
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
