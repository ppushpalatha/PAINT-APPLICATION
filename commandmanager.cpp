#include "commandmanager.h"
#include "cmd.h"

#include<stack>

#include "shape.h"

#include<iostream>

using namespace std;

void commandmanager::invoke(cmd* obj)

{

	obj->execute();

	undostack.push(obj);

}

void commandmanager::undo()

{

	cmd* temp;

	if (!undostack.empty())

	{

		temp = undostack.top();

		redostack.push(temp);

		temp->unexecute();

		undostack.pop();

	}

	else

	{

		cout << "No Action to perform";

	}

}

void commandmanager::redo()

{

	cmd* temp;

	if (!redostack.empty())

	{

		temp = redostack.top();

		undostack.push(temp);

		temp->execute();

		redostack.pop();

	}

	else

	{

		cout << "No action to perform\n";

	}

}
