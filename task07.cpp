#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printmaze();
void move(int x,int y);


main()
{
system("cls");
printmaze();
int x=15;
int y=20;
while (1)
{
	move(x,y);
	if (y>1)
	{
	y=y-1;
	}


	if(y==1)
	{
	
	gotoxy(x,y);
	cout<< " ";
	y=20;
	}

}
}



















void move(int x,int y)
{
gotoxy(x,y);
cout <<" ";
gotoxy(x,y-1);
cout<< "p";
Sleep(200);
}






void printmaze()
{
cout << "####################################################################################################################################### " << endl;
cout << "||..  ......................................................................................................................   ....  || " << endl;
cout << "||..  %%%%%%%%%%%%%%%%%%%%%%                     ...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   |%|..                   %%%%  ||" << endl;  
cout << "||..        |%|           |%|                 |%|...              |%|                            |%|   |%|..                    |%|  ||" << endl;
cout << "||..        |%|           |%|                 |%|...              |%|                            |%|   |%|..                    |%|  ||"<<endl;
cout << "||..        %%%%%%%%%%%%%%%%%     .      .    |%|...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%      ..                   %%%%  ||" <<endl;
cout << "||..        |%|                   .      .    |%|...              .................................. |%|  ..                        .||"<<endl;
cout << "||..        %%%%%%%%%%%%%%%%%     .      .    |%|...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%      |%|  ..                   %%%%  ||"<<endl;
cout << "||..                      |%|     .                               |%|................                |%|  ..                    |%| .||"<< endl;
cout << "||..       ............   |%|     .                 p             |%|................ |%|                 ..                    |%| .||" <<endl;
cout << "||..|%|    |%|%%%%%%|%|.  |%|     .        |%|                       ................ |%|                 ..|%|                 |%| .||"<<endl;
cout << "||..|%|    |%|      |%|...                 %%%%%%%%%%%%%%%%%%%%%%%   .................|%|                  .|%| .                    ||"<<endl;
cout << "||..|%|    |%|      |%|...                                 ....|%|              %%%%%%%%%                  .|%|                      ||"<<endl;
cout << "||..|%|                  .                                 ....|%|                                  |%|  ...|%|.                     ||"<< endl;
cout<<  "||..|%|    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                 ....|%|%%%%%%%%%%%%%%%%%%%%%%            |%|  ...|%|%%%%%%%%%%%           ||"<<endl;
cout<<  "||......................................................................................            |%|  ................            ||" <<endl;
cout<<  "||      ................................................................................                  .......................    ||" <<endl;
cout << "||..|%|   |%|       |%| ..               %%%%%%%%%%%%%%%%%%%%%%%     .................|%|           |%|  ...|%|.                     ||"<<endl;
cout << "||..|%|   |%|..                                        ......|%|                %%%%%%%%%           |%|  ...|%|.                     ||"<<endl;
cout << "||.......................................................................................                   .....................    ||" <<endl;
cout << "||          .............................................................................                   .....................    ||" <<endl;
cout << "#######################################################################################################################################" <<endl;
}




















void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 

