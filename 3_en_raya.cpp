/*
Universidad Católica San Pablo - Departamento de Ciencia de la Computación
------------- 3 en raya ----------------
Curso: Ciencia de la Computación I - CCOMP2-1 - Semestre 2021-2
Profesor: DSc. Manuel Eduardo Loaiza Fernández
Integrantes: 
- Leonardo Alonso Ramirez Quiroz
- Diego Enrique Zegarra Zenteno
- Rodrigo del Piero Meléndez Flores
- Jair Lino Paul Quispe Rodriguez
Arequipa - Perú
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char a1 = '1', a2 = '2', a3 = '3', b1 = '4', b2 = '5', b3 = '6', c1 = '7', c2 = '8', c3 = '9';
    cout << '\n' << "--------------" << '\n';
    cout << " | " << a1 << " | " << a2 << " | " << a3 << " | ";
    cout << '\n' << "--------------" << '\n';
    cout << " | " << b1 << " | " << b2 << " | " << b3 << " | ";
    cout << '\n' << "--------------" << '\n';
    cout << " | " << c1 << " | " << c2 << " | " << c3 << " | ";
    cout << '\n' << "--------------" << '\n';

    char jugador_1;
    char jugador_2;
    int modo_de_juego;

    bool juego = true;

    cout << "¡Juguemos 3 en raya!" << endl << "-----------------------" << endl << "REGLAS: " << endl;
    cout << "Si usas tu turno para poner tu caracter en un lugar que ya estaba ocupado por otro, pierdes tu turno, diviértete" << endl << endl << "Seleccione el modo de juego (1 o 2):" << endl;
    cout << "1. Jugador vs Jugador" << endl << "2. Jugador vs Computadora" << endl;

    while (true)
    {
        cin >> modo_de_juego;
        if (modo_de_juego == 1 || modo_de_juego == 2)
            break;
    }


    while (true)
    {
        cout << "Ficha de jugador 1 (X/O): ";
        cin >> jugador_1;
        if (jugador_1 == 'X' || jugador_1 == 'O')
            break;
    }

    a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';

    int num = 1;

    if (modo_de_juego == 1){
      
      cout << "--- Jugador vs Jugador ---" << endl;

      if (jugador_1 == 'X')
      {
          jugador_2 = 'O';
      }
      else if (jugador_1 == 'O')
      {
          jugador_2 = 'X';
      }

      cout << "Jugador 1: " << jugador_1 << endl << "Jugador 2 : " << jugador_2 << endl << endl << endl << endl;
      while (juego)
      {
          if (num % 2 != 0)
          {
              cout << "Jugador 1 inserte la posicion: ";
              int posicion1;
              cin >> posicion1;
              if (posicion1 == 1)
              {
                  if (a1 == ' ')
                      a1 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 2)
              {
                  if (a2 == ' ')
                      a2 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 3)
              {
                  if (a3 == ' ')
                      a3 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 4)
              {
                  if (b1 == ' ')
                      b1 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 5)
              {
                  if (b2 == ' ')
                      b2 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 6)
              {
                  if (b3 == ' ')
                      b3 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 7)
              {
                  if (c1 == ' ')
                      c1 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 8)
              {
                  if (c2 == ' ')
                      c2 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
              else if (posicion1 == 9)
              {
                  if (c3 == ' ')
                      c3 = jugador_1;
                  else {
                      cout << "Jugador 1 pierde su turno" << endl;
                  }
              }
          }
          if (num % 2 == 0)
          {
              cout << "Jugador 2 inserte la posicion: ";
              int posicion2;
              cin >> posicion2;
              if (posicion2 == 1)
              {
                  if (a1 == ' ')
                      a1 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 2)
              {
                  if (a2 == ' ')
                      a2 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 3)
              {
                  if (a3 == ' ')
                      a3 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 4)
              {
                  if (b1 == ' ')
                      b1 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 5)
              {
                  if (b2 == ' ')
                      b2 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 6)
              {
                  if (b3 == ' ')
                      b3 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 7)
              {
                  if (c1 == ' ')
                      c1 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 8)
              {
                  if (c2 == ' ')
                      c2 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
              else if (posicion2 == 9)
              {
                  if (c3 == ' ')
                      c3 = jugador_2;
                  else
                  {
                      cout << "Jugador 2 pierde su turno" << endl;
                  }
              }
          }

          num = num + 1;
          
          cout << '\n' << "--------------" << '\n';
          cout << " | " << a1 << " | " << a2 << " | " << a3 << " | ";
          cout << '\n' << "--------------" << '\n';
          cout << " | " << b1 << " | " << b2 << " | " << b3 << " | ";
          cout << '\n' << "--------------" << '\n';
          cout << " | " << c1 << " | " << c2 << " | " << c3 << " | ";
          cout << '\n' << "--------------" << '\n';

          if (a1 == jugador_1 && a2 == jugador_1 && a3 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }
          if (b1 == jugador_1 && b2 == jugador_1 && b3 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }
          if (c1 == jugador_1 && c2 == jugador_1 && c3 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }
          if (a1 == jugador_1 && b1 == jugador_1 && c1 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }
          if (a2 == jugador_1 && b2 == jugador_1 && c2 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }
          if (a3 == jugador_1 && b3 == jugador_1 && c3 == jugador_1)
          {
              cout << "gana jugador uno" << endl;

              break;
          }
          if (a1 == jugador_1 && b2 == jugador_1 && c3 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }
          if (a3 == jugador_1 && b2 == jugador_1 && c1 == jugador_1)
          {
              cout << "gana jugador uno" << endl;
              break;
          }


          if (a1 == jugador_2 && a2 == jugador_2 && a3 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }
          if (b1 == jugador_2 && b2 == jugador_2 && b3 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }
          if (c1 == jugador_2 && c2 == jugador_2 && c3 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }
          if (a1 == jugador_2 && b1 == jugador_2 && c1 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }
          if (a2 == jugador_2 && b2 == jugador_2 && c2 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }
          if (a3 == jugador_2 && b3 == jugador_2 && c3 == jugador_2)
          {
              cout << "gana jugador dos" << endl;

              break;
          }
          if (a1 == jugador_2 && b2 == jugador_2 && c3 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }
          if (a3 == jugador_2 && b2 == jugador_2 && c1 == jugador_2)
          {
              cout << "gana jugador dos" << endl;
              break;
          }

          if (a1 != ' ' && a2 != ' ' && a3 != ' ' && b1 != ' ' && b2 != ' ' && b3 != ' ' && c1 != ' ' && c2 != ' ' && c3 != ' ')
          {
              cout << "EMPATE" << endl;
              break;
          }
      }
    }

    else if (modo_de_juego == 2) //Si se eligió jugar contra la maquina primero elegimos la ficha con la que queremos jugar
    {
      cout << "--- Jugador vs Máquina ---" << endl;
      a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
      if (jugador_1 == 'X')
        {
            jugador_2 = 'O';
        }
        else if (jugador_1 == 'O')
        {
            jugador_2 = 'X';
        }

        cout << "Jugador: " << jugador_1 << endl << "Máquina: " << jugador_2 << endl << endl << endl << endl;

      while(true){ //Comenzamos poniendo nuestra posición con un número del 1 al 9 y si este número ya esta ocupado se pierde el turno
      
        int posicion1;
        if (num % 2 !=0){
          cout << "Jugador inserte la posicion: ";
          cin >> posicion1;
          if (posicion1 == 1)
          {
            if (a1 == ' ')
              a1 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 2)
          {
            if (a2 == ' ')
              a2 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 3)
          {
            if (a3 == ' ')
              a3 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 4)
          {
            if (b1 == ' ')
              b1 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 5)
          {
            if (b2 == ' ')
              b2 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 6)
          {
            if (b3 == ' ')
              b3 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 7)
          {
            if (c1 == ' ')
              c1 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 8)
          {
            if (c2 == ' ')
              c2 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
          else if (posicion1 == 9)
          {
            if (c3 == ' ')
              c3 = jugador_1;
            else {
              cout << "Jugador pierde su turno" << endl;
            }
          }
        }
        // Cuando es su turno primero vera si tiene las posiciones necesarias para intentar ganar y si ve que tu puedes ganar intenta defenderla
        if( num % 2 == 0 ){

          if((a1 == jugador_1 && a2 == jugador_1 && a3 == ' ' )||(a1 == jugador_2 && a2 == jugador_2 && a3 == ' ' ) )     //   Defensa en horizontal (a)
            a3=jugador_2;
          else if ((a2 == jugador_1 && a3 == jugador_1 && a1 ==' ')||(a2 == jugador_2 && a3 == jugador_2 && a1 ==' '))
            a1=jugador_2;
          else if ((a1 == jugador_1 && a3 == jugador_1 && a2 ==' ')||(a1 == jugador_2 && a3 == jugador_2 && a2 == ' ' ))
            a2=jugador_2;
            
          else if((b1 == jugador_1 && b2 == jugador_1 && b3 == ' ')||(b1 == jugador_2 && b2 == jugador_2 && b3 == ' '))   //   Defensa en horizontal (b)
            b3=jugador_2;
          else if ((b2 == jugador_1 && b3 == jugador_1 && b1 ==' ')||(b2 == jugador_2 && b3 == jugador_2 && b1 ==' '))
            b1=jugador_2;
          else if ((b1 == jugador_1 && b3 == jugador_1 && b2 ==' ')||(b1 == jugador_2 && b3 == jugador_2 && b2 ==' '))
            b2=jugador_2;
            
          else if((c1 == jugador_1 && c2 == jugador_1 && c3 == ' ')||(c1 == jugador_2 && c2 == jugador_2 && c3 == ' '))   //   Defensa en horizontal (c)
            c3=jugador_2;
          else if ((c2 == jugador_1 && c3 == jugador_1 && c1 ==' ')||(c2 == jugador_2 && c3 == jugador_2 && c1 ==' '))
            c1=jugador_2;
          else if ((c1 == jugador_1 && c3 == jugador_1 && c2 ==' ')||(c1 == jugador_2 && c3 == jugador_2 && c2 ==' '))
            c2=jugador_2; 
          
          else if((a1 == jugador_1 && b1 == jugador_1 && c1 == ' ')||(a1 == jugador_2 && b1 == jugador_2 && c1 == ' '))   //   Defensa vertival (1)
            c1=jugador_2;
          else if ((c1 == jugador_1 && b1 == jugador_1 && a1 ==' ')||(c1 == jugador_2 && b1 == jugador_2 && a1 ==' '))
            a1=jugador_2;
          else if ((a1 == jugador_1 && c1 == jugador_1 && b1 ==' ')||(a1 == jugador_2 && c1 == jugador_2 && b1 ==' '))
            b1=jugador_2;

          else if((a2 == jugador_1 && b2 == jugador_1 && c2 == ' ')||(a2 == jugador_2 && b2 == jugador_2 && c2 == ' '))   //    Defensa vertival (2)
            c2=jugador_2;
          else if ((c2 == jugador_1 && b2 == jugador_1 && a2 ==' ')||(c2 == jugador_2 && b2 == jugador_2 && a2 ==' '))
            a2=jugador_2;
          else if ((a2 == jugador_1 && c2 == jugador_1 && b2 ==' ')||(a2 == jugador_2 && c2 == jugador_2 && b2 ==' '))
            b2=jugador_2;
            
          else if((a3 == jugador_1 && b3 == jugador_1 && c3 == ' ')||(a3 == jugador_2 && b3 == jugador_2 && c3 == ' '))   //     Defensa vertival (3)
            c3=jugador_2;
          else if ((c3 == jugador_1 && b3 == jugador_1 && a3 ==' ')||(c3 == jugador_2 && b3 == jugador_2 && a3 ==' '))
            a3=jugador_2;
          else if ((a3 == jugador_1 && c3 == jugador_1 && b3 ==' ')||(a3 == jugador_2 && c3 == jugador_2 && b3 ==' '))
            b3=jugador_2;

          else if((a1 == jugador_1 && b2 == jugador_1 && c3 == ' ')||(a1 == jugador_2 && b2 == jugador_2 && c3 == ' '))         //     Defensa diagonal (1)
            c3=jugador_2;
          else if ((b2 == jugador_1 && c3 == jugador_1 && a1 ==' ')||(b2 == jugador_2 && c3 == jugador_2 && a1 ==' '))
            a1=jugador_2;
          else if ((a1 == jugador_1 && c3 == jugador_1 && b2 ==' ')||(a1 == jugador_2 && c3 == jugador_2 && b2 ==' '))
            b2=jugador_2;
          
          else if((a3 == jugador_1 && b2 == jugador_1 && c1 == ' ' )||(a3 == jugador_2 && b2 == jugador_2 && c1 == ' ' ))        // Defensa diagonal (2)
            c1=jugador_2;
          else if ((b2 == jugador_1 && c1 == jugador_1 && a3 ==' ')||(b2 == jugador_2 && c1 == jugador_2 && a3 ==' '))
            a3=jugador_2;
          else if ((a3 == jugador_1 && c1 == jugador_1 && b2 ==' ')||(a3 == jugador_2 && c1 == jugador_2 && b2 ==' '))
            b2=jugador_2;  


          // Si no tiene con que ganar o que defender eligira una posicion aleatoria
          else {
            posicion1 = (1+ rand() % (10 - 1));
            if (posicion1 == 1)
            {
              if (a1 == ' ')
                a1 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 2)
            {
              if (a2 == ' ')
                a2 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 3)
            {
              if (a3 == ' ')
                a3 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 4)
            {
              if (b1 == ' ')
                b1 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 5)
            {
              if (b2 == ' ')
                b2 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 6)
            {
              if (b3 == ' ')
                b3 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 7)
            {
              if (c1 == ' ')
                c1 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 8)
            {
              if (c2 == ' ')
                c2 = jugador_2;
              else {
                cout << "Maquina pierde su turno" << endl;
              }
            }
            else if (posicion1 == 9)
            {
              if (c3 == ' ')
                c3 = jugador_2;
              else {
                cout << "No existe una máquina que pueda hacer el trabajo de un hombre extraordinario" << endl;
              }
            }
          }
          cout << "Máquina escogió la posición " << posicion1 << endl; 
        }
      // se actualiza la tabla con los cambios q hicimos con nuestras fichas
      num = num + 1;

      cout << '\n' << "--------------" << '\n';
      cout << " | " << a1 << " | " << a2 << " | " << a3 << " | ";
      cout << '\n' << "--------------" << '\n';
      cout << " | " << b1 << " | " << b2 << " | " << b3 << " | ";
      cout << '\n' << "--------------" << '\n';
      cout << " | " << c1 << " | " << c2 << " | " << c3 << " | ";
      cout << '\n' << "--------------" << '\n';
    // Condiciones de victoria de la maquina y del jugador
        if (a1 == jugador_1 && a2 == jugador_1 && a3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (b1 == jugador_1 && b2 == jugador_1 && b3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (c1 == jugador_1 && c2 == jugador_1 && c3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a1 == jugador_1 && b1 == jugador_1 && c1 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a2 == jugador_1 && b2 == jugador_1 && c2 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a3 == jugador_1 && b3 == jugador_1 && c3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;

            break;
        }
        if (a1 == jugador_1 && b2 == jugador_1 && c3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a3 == jugador_1 && b2 == jugador_1 && c1 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }


        if (a1 == jugador_2 && a2 == jugador_2 && a3 == jugador_2)
        {
            cout << "Gana la Máquina" << endl;
            break;
        }
        if (b1 == jugador_2 && b2 == jugador_2 && b3 == jugador_2)
        {
            cout << "Gana la Máquina" << endl;
            break;
        }
        if (c1 == jugador_2 && c2 == jugador_2 && c3 == jugador_2)
        {
            cout << "Gana la Máquina" << endl;
            break;
        }
        if (a1 == jugador_2 && b1 == jugador_2 && c1 == jugador_2)
        {
            cout << "Gana la Maáquina" << endl;
            break;
        }
        if (a2 == jugador_2 && b2 == jugador_2 && c2 == jugador_2)
        {
            cout << "Gana la  Máquina" << endl;
            break;
        }
        if (a3 == jugador_2 && b3 == jugador_2 && c3 == jugador_2)
        {
            cout << "Gana la Máquina" << endl;

            break;
        }
        if (a1 == jugador_2 && b2 == jugador_2 && c3 == jugador_2)
        {
            cout << "Gana la Máquina" << endl;
            break;
        }
        if (a3 == jugador_2 && b2 == jugador_2 && c1 == jugador_2)
        {
            cout << "Gana la Máquina" << endl;
            break;
        }
 
        if (a1 != ' ' && a2 != ' ' && a3 != ' ' && b1 != ' ' && b2 != ' ' && b3 != ' ' && c1 != ' ' && c2 != ' ' && c3 != ' ')
        {
            cout << "EMPATE" << endl;
            break;
        }
      }
    }
  }

    
  

