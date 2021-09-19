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
  bool juego = true;
  bool bucle = true;    

  cout << "¡Juguemos 3 en raya!" << endl << "-----------------------" << endl << "REGLAS: " << endl;
  cout << "Si usas tu turno para poner tu caracter en un lugar que ya estaba ocupado por otro, pierdes tu turno, diviértete" << endl << endl << endl << endl;

  // Se enseña la primera tabla con sus posiciones y se dan las instrucciones del juego.

  while (bucle)
    {
        cout << "Ficha de jugador 1 (X/O): ";
        cin >> jugador_1;
        if (jugador_1 == 'X' || jugador_1 == 'O')
          bucle=false;  // EL jugador 1 escoge si quiere jugar con X o con O, si no ingresa uno de estos se le pregunta de nuevo.
    }
  
	if (jugador_1 == 'X')   // Sentencias si el Jugador 1 juega con X
	{
    cout << "Jugador 1: X" << endl << "Jugador 2: O" << endl << endl << endl << endl;
		a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
		char jugador_2 = 'X';

		int num = 1;
    // Las posición en el tablero se reemplazan con espacios en blanco, inicializamos la variable int num en 1 que servirá como el número del turno

		while (juego)
  	{
			if (num % 2 != 0)   // Si num es impar, quiere decir que el turno es del jugador 1
			{
				cout << "Jugador 1 inserte la posicion: ";
				int posicion1;
				cin >> posicion1;
				if (posicion1 == 1) 
        // Se reemplaza la posición seleccionada por el jugador 1 por una X
				{
					if (a1 == ' ')
            a1 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
            // Si se selecciona una posición que ya estaba ocupada por una letra (X u O), el jugador pierde su turno
            }
				}
				else if (posicion1 == 2)
				{
					if (a2 == ' ')
            a2 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
            }
				}
				else if (posicion1 == 3)
				{
					if (a3 == ' ')
            a3 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
            }
				}
				else if (posicion1 == 4)
				{
					if (b1 == ' ')
            b1 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 5)
				{
					if (b2 == ' ')
            b2 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 6)
				{
					if (b3 == ' ')
            b3 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 7)
				{
					if (c1 == ' ')
            c1 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 8)
				{
					if (c2 == ' ')
            c2 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 9)
				{
					if (c3 == ' ')
            c3 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
			}
			if (num % 2 == 0)   // Turno par = Turno del jugador 2
			{
				cout << "Jugador 2 inserte la posicion: ";
				int posicion2;
				cin >> posicion2;
				if (posicion2 == 1)
				{
					if (a1 == ' ')
            a1 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
        // Se llena con la letra O la posición ingresada por el jugador 2, si la posición ya estaba ocupada, el jugador 2 pierde su turno
				else if (posicion2 == 2)
				{
					if (a2 == ' ')
            a2 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 3)
				{
					if (a3 == ' ')
            a3 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 4)
				{
					if (b1 == ' ')
            b1 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 5)
				{
					if (b2 == ' ')
            b2 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 6)
				{
					if (b3 == ' ')
            b3 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 7)
				{
					if (c1 == ' ')
            c1 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 8)
				{
					if (c2 == ' ')
            c2 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
				else if (posicion2 == 9)
				{
					if (c3 == ' ')
            c3 = 'O';
          else
          {
            cout << "Jugador 2 pierde su turno" << endl;
          }
				}
			}

      // Se hace el mismo tablero con la posición actualizada después del turno de cada jugador
			num = num + 1;
			cout << '\n' << "--------------" << '\n';
			cout << " | " << a1 << " | " << a2 << " | " << a3 << " | ";
			cout << '\n' << "--------------" << '\n';
			cout << " | " << b1 << " | " << b2 << " | " << b3 << " | ";
			cout << '\n' << "--------------" << '\n';
			cout << " | " << c1 << " | " << c2 << " | " << c3 << " | ";
			cout << '\n' << "--------------" << '\n';
      
      // Se revisan todos los 3 posibles 3 en raya para verificar quién es el ganador
      if (a1=='X'&& a2 =='X' && a3=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        } 
      if (b1=='X'&& b2 =='X' && b3=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (c1=='X'&& c2 =='X' && c3=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a1=='X'&& b1 =='X' && c1=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a2=='X'&& b2 =='X' && c2=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a3=='X'&& b3 =='X' && c3=='X')
        {
          cout << "Gana jugador uno"<<endl;
          
          break;
        }
      if (a1=='X'&& b2 =='X' && c3=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a3=='X'&& b2 =='X' && c1=='X')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      

      if (a1=='O'&& a2 =='O' && a3=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        } 
      if (b1=='O'&& b2 =='O' && b3=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (c1=='O'&& c2 =='O' && c3=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a1=='O'&& b1 =='O' && c1=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a2=='O'&& b2 =='O' && c2=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a3=='O'&& b3 =='O' && c3=='O')
        {
          cout << "Gana jugador dos"<<endl;
          
          break;
        }
      if (a1=='O'&& b2 =='O' && c3=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a3=='O'&& b2 =='O' && c1=='O')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }

      // Si todas las posiciones están llenas y no se verifica ningún ganador, el juega queda en empate
      if (a1 != ' ' && a2 != ' ' && a3!= ' ' && b1 != ' ' && b2 != ' ' && b3 != ' ' && c1 != ' ' && c2 != ' ' && c3 != ' '){
        cout << "EMPATE" << endl;
        break;
      }
		} 
	}

  // Se repiten las misma sentencias si el jugador 1 escoge jugar con la letra O
  else if (jugador_1 == 'O')
	{
    cout << "Jugador 1: O" << endl << "Jugador 2: X" << endl;
		char a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
		char jugador_2 = 'X';
		int num = 1;
		while (juego)
		{
			if (num % 2 != 0)
			{
				cout << " Jugador 1 inserte la posición: ";
				int posicion1;
				cin >> posicion1;
				if (posicion1 == 1)
				{
					if (a1 == ' ')
            a1 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
            }
				}
				else if (posicion1 == 2)
				{
					if (a2 == ' ')
            a2 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
            }
				}
				else if (posicion1 == 3)
				{
					if (a3 == ' ')
            a3 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
            }
				}
				else if (posicion1 == 4)
				{
					if (b1 == ' ')
            b1 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 5)
				{
					if (b2 == ' ')
            b2 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 6)
				{
					if (b3 == ' ')
            b3 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 7)
				{
					if (c1 == ' ')
            c1 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 8)
				{
					if (c2 == ' ')
            c2 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion1 == 9)
				{
					if (c3 == ' ')
            c3 = 'O';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
			}
			if (num % 2 == 0)
			{
				cout << " Jugador 2 inserte la posicion: ";
				int posicion2;
				cin >> posicion2;
				if (posicion2 == 1)
				{
				  if (a1 == ' ')
            a1 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 2)
				{
					if (a2 == ' ')
            a2 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 3)
				{
					if (a3 == ' ')
            a3 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 4)
				{
					if (b1 == ' ')
            b1 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 5)
				{
					if (b2 == ' ')
            b2 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 6)
				{
					if (b3 == ' ')
            b3 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  };
				}
				else if (posicion2 == 7)
				{
					if (c1 == ' ')
            c1 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 8)
				{
					if (c2 == ' ')
            c2 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
				  }
				}
				else if (posicion2 == 9)
				{
					if (c3 == ' ')
            c3 = 'X';
          else{
            cout << "Jugador 1 pierde su turno" << endl;
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

     
      if (a1=='X'&& a2 =='X' && a3=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        } 
      if (b1=='X'&& b2 =='X' && b3=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (c1=='X'&& c2 =='X' && c3=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a1=='X'&& b1 =='X' && c1=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a2=='X'&& b2 =='X' && c2=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a3=='X'&& b3 =='X' && c3=='X')
        {
          cout << "Gana jugador dos"<<endl;     
          break;
        }
      if (a1=='X'&& b2 =='X' && c3=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      if (a3=='X'&& b2 =='X' && c1=='X')
        {
          cout << "Gana jugador dos"<<endl;
          break;
        }
      


      if (a1=='O'&& a2 =='O' && a3=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        } 
      if (b1=='O'&& b2 =='O' && b3=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (c1=='O'&& c2 =='O' && c3=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a1=='O'&& b1 =='O' && c1=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a2=='O'&& b2 =='O' && c2=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a3=='O'&& b3 =='O' && c3=='O')
        {
          cout << "Gana jugador uno"<<endl;
          
          break;
        }
      if (a1=='O'&& b2 =='O' && c3=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
      if (a3=='O'&& b2 =='O' && c1=='O')
        {
          cout << "Gana jugador uno"<<endl;
          break;
        }
       
      if (a1 != ' ' && a2 != ' ' && a3!= ' ' && b1 != ' ' && b2 != ' ' && b3 != ' ' && c1 != ' ' && c2 != ' ' && c3 != ' '){
        cout << "EMPATE" << "\a" << endl;
        break;
      }
		} 
	}
	return 0;
}




