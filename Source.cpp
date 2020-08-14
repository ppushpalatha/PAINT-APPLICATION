#include<iostream>
#include "rectangle.h"
#include "square.h"
#include "shape.h"
#include "commandmanager.h"
#include "movecmd.h"
#include "rotatecmd.h"
#include "scalecmd.h"
#include "circle.h"
using namespace std;
int main()
{

	shape* s[3];
	s[0] = new square(9, 0, 0);
	std::cout << " Square: "<< std::endl;
	s[0]->display();
	s[1] = new rectangle(3,6, 0, 0);
	std::cout << "Rectangle : " << std::endl;
	s[1]->display();
	s[2] = new circle(9, 0, 0);
	std::cout << " Circle :" << std::endl;
	s[2]->display();

	commandmanager* cm = new commandmanager();
	movecmd* cmd1 = new movecmd(s[0], 4, 5);
	cm->invoke(cmd1);


	movecmd* cmd2 = new movecmd(s[1], 9,6);
	cm->invoke(cmd2);
	cout << "" << endl;
	cout << "move operatoion of sqaure :" << endl;
	cout << "" << endl;

	for (int i = 0; i < 3; i++)
	{
		s[i]->display();
	}

	rotatecmd* cmd3 = new rotatecmd(s[1]);

	cm->invoke(cmd3);
	cout << "" << endl;
	cout << "move operation of Rectangle :" << endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)
	{
		s[i]->display();
	}

	rotatecmd* cmd4 = new rotatecmd(s[0]);
	cm->invoke(cmd4);
	cout << "" << endl;
	cout << "Rotating a Square" << endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)

	{

		s[i]->display();

	}

	scalecmd* cmd5 = new scalecmd(s[0], 7);

	cm->invoke(cmd5);

	cout << "" << endl;

	cout << "Scaling a sqaure :" << endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)

	{

		s[i]->display();

	}

	scalecmd* cmd6 = new scalecmd(s[1], 6);

	cm->invoke(cmd6);

	cout << "" << endl;

	cout << " Scaling a rectangle :" << endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)

	{

		s[i]->display();

	}

	cm->undo();

	cout << "" << endl;

	cout << "Undo..." << endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)

	{

		s[i]->display();

	}

	cm->undo();

	cout << "" << endl;

	cout << "Undo" << std::endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)

	{

		s[i]->display();

	}

	cm->redo();

	cout << "" << endl;

	cout << "Redo" << std::endl;

	cout << "" << endl;

	for (int i = 0; i < 3; i++)

	{

		s[i]->display();

	}

	return 0;

}